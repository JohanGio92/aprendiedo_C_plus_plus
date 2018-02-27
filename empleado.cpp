#include "empleado.h"
using namespace std;

Empleado::Empleado()
:nombreEmpleado("alexa")
{
};

void Empleado::setNombre(string nombre)
{
  nombreEmpleado = nombre;
};

string Empleado::obtenerNombre()
{
  return nombreEmpleado;
};