#include "Estudiante.h"
Estudiante::Estudiante(){
	
}
Estudiante::~Estudiante(){
}
void Estudiante::set_nombre(string n) {
	nombre = n;
}
string Estudiante::get_nombre() {
	return nombre;
}
void Estudiante:: set_materia(string m) {
	materia = m;
}
string Estudiante::get_materia() {
	return materia;
}
void Estudiante::set_edad(double Edad) {
	edad = Edad;
}
double Estudiante::get_edad(){
	return edad;
}
void Estudiante::set_calificacion(double nota) {
	calificacion = nota;
}
double Estudiante::get_calificacion(){
	return calificacion;
}
