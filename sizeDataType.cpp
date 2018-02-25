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
  //con modificadores con tipo de datos
  std::cout << "tipo de dato int con modificadores" <<"\n\n";

  std::cout << "size de unsigned int: " << sizeof(unsigned int) << " bytes" <<'\n';
  std::cout << "size de signed int: " << sizeof(signed int) << " bytes" <<'\n';
  std::cout << "size de short int: " << sizeof(short int) << " bytes" <<'\n';
  std::cout << "size de long int: " << sizeof(long int) << " bytes" <<'\n';

  std::cout << "" << '\n';
  //solo modificadores
  std::cout << "tipo de dato int con modificadores" <<"\n\n";

  std::cout << "size de unsigned: " << sizeof(unsigned) << " bytes" <<'\n';
  std::cout << "size de signed: " << sizeof(signed) << " bytes" <<'\n';
  std::cout << "size de short: " << sizeof(short) << " bytes" <<'\n';
  std::cout << "size de long: " << sizeof(long) << " bytes" <<'\n';


  std::cout << "" << '\n';
  //con double
  std::cout << "tipo de dato double con modificadores" <<"\n\n";
  std::cout << "size de long double: " << sizeof(long double) << " bytes" <<'\n';

  std::cout << "" << '\n';
  //con char
  std::cout << "tipo de dato double con modificadores" <<"\n\n";
  std::cout << "size de long unsigned char: " << sizeof(unsigned char) << " bytes" <<'\n';
  std::cout << "size de long signed char: " << sizeof(signed char) << " bytes" <<'\n';

  std::cout << "" << '\n';

  std::cout << "tipo de dato size_t" <<"\n\n";
  //tipo de dato size_t
  std::cout << "size_t: " << sizeof(size_t) << '\n';

    return 0;
}
