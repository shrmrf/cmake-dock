#include "hello.h"
#include <iostream>
#include <string>

void run()
{
  std::cout << "Executing run() " <<std::endl;
  

  char com1[] = "/proc/self/exe";

  system("ls");
  
}

void child()
{
  std::cout << "Executing child() " <<std::endl;

}


int main(int argc, char * argv[]) {
  
  std::cout <<argv[2]<<std::endl;

  char * in_arg = argv[1];

  std::cout<< in_arg <<std::endl;

  char a = 'r';
  char b = 'c';

  if (*in_arg == a)
  {
    run();
  }
  else if (*in_arg == b)
  {
    std::cout<<"Second"<<std::endl;
    child();
  }
  else
  {
    std::cout<<"ERROR!"<<std::endl;
    return 1;
  }
  

}

