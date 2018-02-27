#include <iostream>
#include <string>


int cambioPorReferencia(int &unNumero);

int main(int argc, char const *argv[]) {
  int unNumero = 5;
  std::string nombre = "johan revilla";
  std::cout << nombre << '\n';
  std::cout << "inicializado: unNumero = " << unNumero << '\n';
  cambioPorReferencia(unNumero);
  std::cout << "despues de salir de la funcion: unNumero = " << unNumero << '\n';
  return 0;
}

int cambioPorReferencia(int &unNumero){
  unNumero *= unNumero;
}
