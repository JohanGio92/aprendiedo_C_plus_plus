#include <iostream>

//loop infinito pueden cortarlo con control+c en linux
int main(int argc, char const *argv[]) {
  short a;

  for (a = 1; a <= 32770; a++){
    std::cout << a << '\n';
  }

}
