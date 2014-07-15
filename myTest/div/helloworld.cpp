#include <iostream>

int main()
{
  int i=1;
  while (i<10){
    i++;
  }
  if(i>5){
    i/=2;
  }
  std::string s = "Hello World!";
  std::cout << s << " -- " << i;
  return 0;
}
