#include <iostream>
# include <string>
using namespace std;
#include "empleado.h"

empleado::empleado(string n, string iden, double s) : nombre(n), ID(iden), salario(s) {}
// Método para establecer el nombre del empleado
void empleado::setNombre(string n) {
        nombre = n;
}

// Método para obtener el nombre del empleado
string empleado::getNombre() {
        return nombre;
}

// Método para establecer su ID
void empleado::setID(string iden) {
        ID = iden;
}

// Método para obtener su ID
string empleado::getID() {
        return ID;
}

// Método para establecer el salario
void empleado::setSalario(double s) {
        salario = s;
}

// Método para obtener el salario
double empleado::getSalario() {
        return salario;
}

// Método para mostrar datos generales del empleado o individual
void empleado::muestra() {
    cout << "Nombre: " << nombre << " ID: " << ID  << endl;
}
// Método para mostrar los datos de los empleados incluyendo el salario
void empleado::muestraSalario() {
    cout << "Nombre: " << nombre << " ID: " << ID << " Salario: " << salario << endl;
}


int main() {

    string contrasena = "1234";
    string password = "";
    cout << "Ingrese la contraseña: " << endl;
    cin >> password;
    while (password != contrasena) {
        cout << "Contraseña incorrecta. Vuelva a intentar: ";
        cin >> password;

    }
    cout << "Acceso concedido. Bienvenid@. \nY" << endl; 
    
    string nombre;
    string iden;
    double salario;
    bool salir=false;
    int MAX_EMPLEADOS;
    char opcion;
    cout << "¿Cuántos empleados hay en la empresa? \n";
    cin >> MAX_EMPLEADOS;
    empleado empleadoArray[MAX_EMPLEADOS];
    int anadidos = 0;
    int decision;

    do {
        cout << "Menu de Opciones:\n"
             << "a) Agregar Empleado\n"
             << "b) Mostrar Empleados\n"
             << "c) Modificar Empleado\n"
             << "d) Eliminar Empleado\n"
             << "e) Salarios y Bonos\n"
             << "f) Salir\n";
        cin >> opcion;
        switch (opcion) {
            case 'a': {
                if (anadidos < MAX_EMPLEADOS){
                    cout << "Ingrese el nombre del empleado: ";
                    cin >> nombre;
                    cout << "Ingrese el ID del empleado: ";
                    cin >> iden;
                    salario = 0;
                    empleado persona(nombre, iden, salario);
                    empleadoArray[anadidos] = persona;
                    anadidos += 1;
                } else {
                    cout << "Límite de empleados alcanzado: " << endl;
                }
                break;

            } 
            case 'b': {
                cout << "Elige una opción: " << endl;
                cout << "1. Mostrar todos" << endl;
                cout << "2. Buscar por ID" << endl;
                cin >> decision;
                if (decision == 1 || decision == 2){
                    switch (decision) {
                        case 1: {
                            for (int i=0; i<anadidos; i++){
                                empleadoArray[i].muestra();
                            }
                            break;
                        }
                        case 2: {
                            cout << "Ingrese el index del empleado: ";
                            int buscar;
                            cin >> buscar;
                            if (buscar < anadidos){
                                empleadoArray[buscar].muestra();
                            } else {
                                cout << "La opción no es válida. ";
                            }
                            break;
                        }
                    }
                } else {
                    cout << "La opción no es válida. ";
                }
                break;

            }
            case 'f': {
                salir = true;
                break;
            }
            default: {
                cout << "La opción no es válida. ";
            }
        }
    } while (salir==false);

    return 0;
}