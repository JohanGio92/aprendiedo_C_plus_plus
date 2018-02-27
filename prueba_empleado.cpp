#include "empleado.h"
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  Empleado empleado;
  cout << empleado.obtenerNombre() << '\n';
  string nombre = "johan";
  empleado.setNombre(nombre);
  cout << empleado.obtenerNombre() << '\n';

  return 0;
}
