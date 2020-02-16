#include <iostream>
#include <string>
#include <unistd.h>

void child() {
  std::cout << "Executing child() " << std::endl;
  system("chroot /ubuntu-rootfs");
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << "usage: container run <command>" << std::endl;
    return 1;
  }

  std::string first_arg = argv[1];

  if (first_arg != "run") {
    std::cout << "usage: container run <command>" << std::endl;
    return 1;
  } else if (first_arg == "run") {
    std::cout << "child process" << std::endl;
    child();
  }
}
