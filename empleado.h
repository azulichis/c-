#include <iostream>
#include <string>
using namespace std;
#ifndef empleado_H
#define empleado_H

class empleado {
private:
    string nombre; 
    string ID;
    double salario;
    string tipo;

public:
    empleado(string nombre = "", string iden = "", double salario = 0);

    // Método para establecer el nombre del empleado
    void setNombre(string n);

    // Método para obtener el nombre del empleado
    string getNombre();

    // Método para establecer su ID
    void setID(string iden);

    // Método para obtener su ID
    string getID();

    // Método para establecer el salario
    void setSalario(double s);

    // Método para obtener el salario
    double getSalario();

    // Método para mostrar datos generales del empleado
    void muestra();

    // Método para mostrar datos del empleado incluyendo salarios
    void muestraSalario();

};

#endif
