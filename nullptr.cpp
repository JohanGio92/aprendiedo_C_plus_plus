#include <iostream>

int contar(char* arreglo);

int main(int argc, char const *argv[])
{
  char arreglo[14] = "hola a todos0";
  int contador = contar(arreglo);
  std::cout << contador << '\n';
  return 0;
}

int contar(char* arreglo)
{
  int contador=0;

    for(int i=0; i < 14; i++)
      if(arreglo != nullptr)
        std::cout << ++arreglo << '\n';
      ++contador;

  return contador;
}
