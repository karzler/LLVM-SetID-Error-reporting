#include<stdio.h>
#include "client/linux/handler/exception_handler.h"

void foo();

static bool dumpCallback(const google_breakpad::MinidumpDescriptor& descriptor,
                         void* context,
                         bool succeeded)
{
  printf("Dump path: %s\n", descriptor.path());
  return succeeded;
}

void crash()
{
  volatile int* a = (int*)(NULL);
  *a = 1;
}


int main()
{
       google_breakpad::MinidumpDescriptor descriptor("~/Work/LLVM");
       google_breakpad::ExceptionHandler eh(descriptor,
                                       NULL,
                                       dumpCallback,
                                       NULL,
                                       true,
                                       -1);
	
	printf("Hello!\n");
	printf("Entering foo()...\n");
	foo();
	printf("foo() exited.\n");
	crash();
	return 0;
}
void foo()
{
	printf("Inside foo..");
	int a=3;
	printf("%d\n",3+3);
	printf("Exiting foo...\n");
	
}
