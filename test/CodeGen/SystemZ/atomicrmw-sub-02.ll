; Test 16-bit atomic subtractions.
;
; RUN: llc < %s -mtriple=s390x-linux-gnu | FileCheck %s -check-prefix=CHECK
; RUN: llc < %s -mtriple=s390x-linux-gnu | FileCheck %s -check-prefix=CHECK-SHIFT1
; RUN: llc < %s -mtriple=s390x-linux-gnu | FileCheck %s -check-prefix=CHECK-SHIFT2

; Check subtraction of a variable.
; - CHECK is for the main loop.
; - CHECK-SHIFT1 makes sure that the negated shift count used by the second
;   RLL is set up correctly.  The negation is independent of the NILL and L
;   tested in CHECK.
; - CHECK-SHIFT2 makes sure that %b is shifted into the high part of the word
;   before being used.  This shift is independent of the other loop prologue
;   instructions.
define i16 @f1(i16 *%src, i16 %b) {
; CHECK: f1:
; CHECK: sllg [[SHIFT:%r[1-9]+]], %r2, 3
; CHECK: nill %r2, 65532
; CHECK: l [[OLD:%r[0-9]+]], 0(%r2)
; CHECK: [[LABEL:\.[^:]*]]:
; CHECK: rll [[ROT:%r[0-9]+]], [[OLD]], 0([[SHIFT]])
; CHECK: sr [[ROT]], %r3
; CHECK: rll [[NEW:%r[0-9]+]], [[ROT]], 0({{%r[1-9]+}})
; CHECK: cs [[OLD]], [[NEW]], 0(%r2)
; CHECK: jlh [[LABEL]]
; CHECK: rll %r2, [[OLD]], 16([[SHIFT]])
; CHECK: br %r14
;
; CHECK-SHIFT1: f1:
; CHECK-SHIFT1: sllg [[SHIFT:%r[1-9]+]], %r2, 3
; CHECK-SHIFT1: lcr [[NEGSHIFT:%r[1-9]+]], [[SHIFT]]
; CHECK-SHIFT1: rll
; CHECK-SHIFT1: rll {{%r[0-9]+}}, {{%r[0-9]+}}, 0([[NEGSHIFT]])
; CHECK-SHIFT1: rll
; CHECK-SHIFT1: br %r14
;
; CHECK-SHIFT2: f1:
; CHECK-SHIFT2: sll %r3, 16
; CHECK-SHIFT2: rll
; CHECK-SHIFT2: sr {{%r[0-9]+}}, %r3
; CHECK-SHIFT2: rll
; CHECK-SHIFT2: rll
; CHECK-SHIFT2: br %r14
  %res = atomicrmw sub i16 *%src, i16 %b seq_cst
  ret i16 %res
}

; Check the minimum signed value.  We add 0x80000000 to the rotated word.
define i16 @f2(i16 *%src) {
; CHECK: f2:
; CHECK: sllg [[SHIFT:%r[1-9]+]], %r2, 3
; CHECK: nill %r2, 65532
; CHECK: l [[OLD:%r[0-9]+]], 0(%r2)
; CHECK: [[LABEL:\.[^:]*]]:
; CHECK: rll [[ROT:%r[0-9]+]], [[OLD]], 0([[SHIFT]])
; CHECK: afi [[ROT]], -2147483648
; CHECK: rll [[NEW:%r[0-9]+]], [[ROT]], 0([[NEGSHIFT:%r[1-9]+]])
; CHECK: cs [[OLD]], [[NEW]], 0(%r2)
; CHECK: jlh [[LABEL]]
; CHECK: rll %r2, [[OLD]], 16([[SHIFT]])
; CHECK: br %r14
;
; CHECK-SHIFT1: f2:
; CHECK-SHIFT1: sllg [[SHIFT:%r[1-9]+]], %r2, 3
; CHECK-SHIFT1: lcr [[NEGSHIFT:%r[1-9]+]], [[SHIFT]]
; CHECK-SHIFT1: rll
; CHECK-SHIFT1: rll {{%r[0-9]+}}, {{%r[0-9]+}}, 0([[NEGSHIFT]])
; CHECK-SHIFT1: rll
; CHECK-SHIFT1: br %r14
;
; CHECK-SHIFT2: f2:
; CHECK-SHIFT2: br %r14
  %res = atomicrmw sub i16 *%src, i16 -32768 seq_cst
  ret i16 %res
}

; Check subtraction of -1.  We add 0x00010000 to the rotated word.
define i16 @f3(i16 *%src) {
; CHECK: f3:
; CHECK: afi [[ROT]], 65536
; CHECK: br %r14
;
; CHECK-SHIFT1: f3:
; CHECK-SHIFT1: br %r14
; CHECK-SHIFT2: f3:
; CHECK-SHIFT2: br %r14
  %res = atomicrmw sub i16 *%src, i16 -1 seq_cst
  ret i16 %res
}

; Check subtraction of 1.  We add 0xffff0000 to the rotated word.
define i16 @f4(i16 *%src) {
; CHECK: f4:
; CHECK: afi [[ROT]], -65536
; CHECK: br %r14
;
; CHECK-SHIFT1: f4:
; CHECK-SHIFT1: br %r14
; CHECK-SHIFT2: f4:
; CHECK-SHIFT2: br %r14
  %res = atomicrmw sub i16 *%src, i16 1 seq_cst
  ret i16 %res
}

; Check the maximum signed value.  We add 0x80010000 to the rotated word.
define i16 @f5(i16 *%src) {
; CHECK: f5:
; CHECK: afi [[ROT]], -2147418112
; CHECK: br %r14
;
; CHECK-SHIFT1: f5:
; CHECK-SHIFT1: br %r14
; CHECK-SHIFT2: f5:
; CHECK-SHIFT2: br %r14
  %res = atomicrmw sub i16 *%src, i16 32767 seq_cst
  ret i16 %res
}

; Check subtraction of a large unsigned value.  We add 0x00020000 to the
; rotated word.
define i16 @f6(i16 *%src) {
; CHECK: f6:
; CHECK: afi [[ROT]], 131072
; CHECK: br %r14
;
; CHECK-SHIFT1: f6:
; CHECK-SHIFT1: br %r14
; CHECK-SHIFT2: f6:
; CHECK-SHIFT2: br %r14
  %res = atomicrmw sub i16 *%src, i16 65534 seq_cst
  ret i16 %res
}
