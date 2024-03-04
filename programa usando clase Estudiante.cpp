#include <iostream>
#include <string>
#include "Estudiante.h"
using namespace std;
int main()
{
    Estudiante alumno = Estudiante();
    string nombre;
    double nota;
    cout << "Introduza el nombre: ";
    getline(cin, nombre);
    alumno.set_nombre(nombre);
    cout << "El nombre del estudiante es: " << alumno.get_nombre() << endl;
    cout << "Introduza la nota: ";
    cin >> nota;
    alumno.set_calificacion(nota);
    cout << "La nota del estudiante es :" << alumno.get_calificacion() << endl;

}
