includes = -I. -I/home/karzler/google-breakpad/src
breakpadlib = ~/google-breakpad/src/client/linux/libbreakpad_client.a

link=-lpthread

CXX = /home/karzler/llvm_build/Debug+Asserts/bin/clang++
clang1=-Xclang -nop-insertion -mllvm -nop-insertion-percentage=40
clang2=-Xclang -nop-insertion -mllvm -nop-insertion-percentage=80

multi_test:
	$(CXX) $(includes) -g hello.cpp  $(breakpadlib) -o hello $(link) $(clang1)
	
	$(CXX) $(includes) -g hello.cpp $(breakpadlib) -o hello1 $(link) $(clang2)
	
	$(CXX) $(includes) -g hello.cpp $(breakpadlib) -o ud_hello $(link)
	$(CXX) $(includes) -O3 -emit-llvm hello.cpp -c -o hello.bc
	

