=============================
How To Validate a New Release
=============================

.. contents::
   :local:
   :depth: 1

Introduction
============

This document contains information about testing the release candidates that will
ultimately be the next LLVM release. For more information on how to manage the
actual release, please refer to :doc:`HowToReleaseLLVM`.

Overview of the Release Process
-------------------------------

Once the release process starts, the Release Manager will ask for volunteers,
and it'll be the role of each volunteer to:

* Test and benchmark the previous release

* Test and benchmark each release candidate, comparing to the previous release and candidates

* Identify, reduce and report every regression found during tests and benchmarks

* Make sure the critical bugs get fixed and merged to the next release candidate

Not all bugs or regressions are show-stoppers and it's a bit of a grey area what
should be fixed before the next candidate and what can wait until the next release.

It'll depend on:

* The severity of the bug, how many people it affects and if it's a regression or a
  known bug. Known bugs are "unsupported features" and some bugs can be disabled if
  they have been implemented recently.

* The stage in the release. Less critical bugs should be considered to be fixed between
  RC1 and RC2, but not so much at the end of it.

* If it's a correctness or a performance regression. Performance regression tends to be
  taken more lightly than correctness.

.. _scripts:

Scripts
=======

The scripts are in the ``utils/release`` directory.

test-release.sh
---------------

This script will configure and compile LLVM+Clang (+ most add-ons, like ``compiler-rt``,
``libcxx`` and ``clang-extra-tools``) in three stages, and will test the final stage.
It'll have installed the final binaries on the Phase3/Release+Asserts directory, and
that's the one you should use for the test-suite and other external tests.

Tip: For some reason, the script bails on ARM because of path mismatch on configure.
The solution was to add a symlink inside the rc1 directory to the llvm.src directory::

   mkdir rc1
   cd rc1
   ln -s ../../llvm.src
   cd ..

To run the script, you must be on the source directory and pass the right options, for example::

   ./utils/release/test-release.sh \
                      -release 3.3 \
                      -rc 1 \
                      -no-checkout \
                      -no-64bit \
                      -test-asserts \
                      -no-compare-files

Each system will require different options. For instance, x86_64 will obviously not need
``-no-64bit`` while 32-bit systems will, or the script will fail.

The important flags to get right are:

* On the pre-release, you should change ``-rc 1`` to ``-final``. On RC2, change it to ``-rc 2`` and so on.

* On both previous release and candidates you must pass ``-no-checkout`` or it'll get the SVN trunk.

* You need ``-test-asserts``, or it won't create a "Release+Asserts" directory, which is needed for
  release testing and benchmarking.

This script builds three phases of Clang+LLVM twice each (Release and Release+Asserts), so use
screen or nohup to avoid headaches, since it'll take a long time.

Use the ``--help`` option to see all the options and chose it according to your needs.


findRegressions-nightly.py
--------------------------

TODO

.. _test-suite:

Test Suite
==========

.. contents::
   :local:

Follow the `LNT Quick Start Guide <http://llvm.org/docs/lnt/quickstart.html>`__ link on how to set-up the test-suite

An example on the run command line, assuming you created a link from the correct
install directory to ``~/devel/llvm/install``::

   ./sandbox/bin/python sandbox/bin/lnt runtest \
       nt \
       -j4 \
       --sandbox sandbox \
       --test-suite ~/devel/llvm/test/test-suite \
       --cc ~/devel/llvm/install/bin/clang \
       --cxx ~/devel/llvm/install/bin/clang++

.. _pre-release-process:

Pre-Release Process
===================

.. contents::
   :local:

When the release process is announced on the mailing list, you should prepare
for the testing, by applying the same testing you'll do on the release candidates,
on the previous release.

You should:

* Download the previous release sources from http://llvm.org/releases/download.html.

* Run the test-release.sh script on ``final`` mode (change ``-rc 1`` to ``-final``).

* Once all three stages are done, it'll test the final stage.

* Using the ``Phase3/Release+Asserts/llvmObj-MAJ.MIN-rcN.install`` base, run the test-suite.

If the final phase's ``make check-all`` failed, it's a good idea to also test the
intermediate stages by going on the obj directory and running ``make check-all`` to find
if there's at least one stage that passes (helps when reducing the error for bug report
purposes).

.. _release-process:

Release Process
===============

.. contents::
   :local:

When the Release Manager sends you the release candidate, download all sources,
unzip on the same directory (there will be sym-links from the appropriate places
to them), and run the release test as above.

You should:

* Download the current candidate sources from where the release manager points you
  (ex. http://llvm.org/pre-releases/3.3/rc1/).

* Repeat the steps above with ``-rc 1``, ``-rc 2`` etc modes and run the test-suite
  the same way.

* Compare the results, report all errors on Bugzilla and publish the binary blob
  where the release manager can grab it.

Once the release manages announces that the latest candidate is the good one, you
have to pack the ``Release`` (no Asserts) install directory on ``Phase3`` and that
will be the official binary.

.. _bug-reporting:

Bug Reporting Process
=====================

.. contents::
   :local:

If you found regressions or failures when comparing a release candidate with the
previous release, follow the rules below:

* Critical bugs on compilation should be fixed as soon as possible, possibly before
  releasing the binary blobs.

* Check-all tests should be fixed before the next release candidate, but can wait
  until the test-suite run is finished.

* Bugs in the test suite or unimportant check-all tests can be fixed in between
  release candidates.

* New features or recent big changes, when close to the release, should have done
  in a way that it's easy to disable. If they misbehave, prefer disabling them than
  releasing an unstable (but untested) binary package.
