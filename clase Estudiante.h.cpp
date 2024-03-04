#pragma once
#include <iostream>
#include <string>
using namespace std;
class Estudiante
{
private:
	string nombre, materia;
	double edad, calificacion;
	public:

		Estudiante();
		~Estudiante();
		void set_nombre(string n);
		string get_nombre();
		void set_materia(string m);
		string get_materia();
		void set_edad(double Edad);
		double get_edad();
		void set_calificacion(double nota);
		double get_calificacion();

};
