#include <iostream>
#include "Matriz.h"
using namespace std;

Matriz::Matriz(){}
Matriz::~Matriz() {}
void Matriz::set_fil(int fila) {
	fil = fila;
}
int Matriz::get_fil() {
	return fil;
}
void Matriz::set_col(int columna) {
	col = columna;
}
int Matriz::get_col() {
	return col;
}
void Matriz::mostrarmat(int fila, int columna) {
for (int i = 0; i < fila; i++)
{
	for (int j = 0; j < columna; j++) {
		cout << matrix[i][j] << "\t";
	}
	cout << endl;
}
}
void Matriz::cargarmat(int fila, int columna) {
	for (int i = 0; i < fila; i++)
		for (int j = 0; j < col; j++) {
			cout << "matrix[" << i << "][" << j << "]= ";
			cin >> matrix[i][j];
		}
}
float Matriz::promedio( int fila, int columna) {
	float prom, s = 0;
	for (int i = 0; i < fila; i++)
		for (int j = 0; j < columna; j++)
			s = s + matrix[i][j];
	prom = s / (fila * col);
	return prom;
}
int Matriz::mayor(int fila, int columna) {
	int may = matrix[0][0];
	for (int i = 0; i < fila; i++)
		for (int j = 0; j < columna; j++)
			if (matrix[i][j] > may)
				may = matrix[i][j];
	return may;
}
