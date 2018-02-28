#include <iostream>
#define SIZE 3

int sumar(int, int);
int restar(int, int);
int multiplicar(int, int);


int sumar(int a, int b)
{
  return a + b;
};

int restar(int a, int b)
{
  return a - b;
};

int multiplicar(int a, int b)
{
  return a * b;
};


typedef int(*ptrFuncion[SIZE])(int, int);

int main(int argc, char const *argv[]) {

  int unNumero, otroNumero, opcion;
  ptrFuncion ptrFuncionesMatematicas = {sumar,
                                        restar,
                                        multiplicar};

  std::cout << "Por favor ingrese dos valores: " << '\n';
  std::cin >> unNumero >> otroNumero;

  std::cout << "ingrese una opcion del 1-3: " << '\n';
  std::cin >> opcion;

  auto resultado = (*ptrFuncionesMatematicas[--opcion])(unNumero, otroNumero);
  std::cout << resultado << '\n';

  return 0;
};
