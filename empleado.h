#include <iostream>
#include <string>

#ifndef EMPLEADO_H
#define EMPLEADO_H

using namespace std;
  
  class Empleado{
    private:
      string nombreEmpleado;
    public:
      Empleado();
      void setNombre(string nombre);
      string obtenerNombre();
  };
#endif