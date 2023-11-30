#include <iostream>
# include <string>
using namespace std;
#include "empleados.h"


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
    
    empleados empleado;

    string nombre;

    bool salir=false;

    do {
        cout<< " Seleccione una opción. \nY Opción 1: Agregar nuevo empleado \nY Opción 2: Consultar \nY 
        Opción 3: Modificar \nY Opción 4: Eliminar \nY Opción 5: Salarios \nY Opción 6: Cerrar programa" << endl ;
        cin >> opcion;

        switch (opcion) {

            case 1: 
                alumno.reset();
                cout << "Seleccionaste agregar un nuevo estudiante" << endl;
                cout<< "Introduce el nombre del alumno: " << endl;
                cin >> nombre;
                alumno.setNombre(nombre);
                
                cout << "Introduce la matrícula del alumno: " << endl;
                cin >> matricula;
                alumno.setMatricula(matricula);

                cout<< "Introduce las tres calificaciones" << endl;
                for (int i=1; i<=3; i++ ) {

                    cin >> calif;
                    alumno.setPromedio(calif);
                }

                promedio = alumno.getPromedio();

                break;

            case 2: 
                cout << "Seleccionaste mostrar calificaciones" << endl;
                cout << "El promedio del estudiante es: " << promedio << endl;
                break;

            case 3:
                cout << "Seleccionaste determinar la clasificación del estudiante" << endl;
                cout << "Nombre del estudiante: " << alumno.getNombre() << endl;
                cout << "Matrícula: " << alumno.getMatricula() << endl;
                cout << "Calificación: " << alumno.consultar(promedio) << endl;
                break;

            case 4: 
                cout << "Ha seleccionado cerrar el programa: ";
                salir = true;
                break;

        }
    } while (salir==false);



    return 0;
}