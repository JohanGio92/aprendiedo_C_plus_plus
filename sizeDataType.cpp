#include <iostream>

int main(int argc, char const *argv[]) {
  //datos primitivos
  std::cout << "tipo de dato primitivos" << "\n\n";

  std::cout << "size de char: " << sizeof(char) << " bytes" <<'\n';
  std::cout << "size de int: " << sizeof(int) << " bytes" <<'\n';
  std::cout << "size de float: " << sizeof(float) << " bytes" <<'\n';
  std::cout << "size de double: " << sizeof(double) << " bytes" <<'\n';
  std::cout << "size de wchar_t: " << sizeof(wchar_t) << " bytes" <<'\n';

  std::cout << "" << '\n';
  //con modificadores
  std::cout << "tipo de dato int con modificadores" <<"\n\n";

  std::cout << "size de unsigned int: " << sizeof(unsigned int) << " bytes" <<'\n';
  std::cout << "size de signed int: " << sizeof(signed int) << " bytes" <<'\n';
  std::cout << "size de short int: " << sizeof(short int) << " bytes" <<'\n';
  std::cout << "size de long int: " << sizeof(long int) << " bytes" <<'\n';

    return 0;
}
