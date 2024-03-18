#pragma once
#define MAX 20
class Matriz
{
private:
	int fil, col;
	double matrix[MAX][MAX];

public:
	Matriz();
	~Matriz();
	void set_fil(int fila);
	int get_fil();
	void set_col(int columna);
	int get_col();
	void mostrarmat( int fila, int columna);
	void cargarmat( int fila, int columna);
	float promedio( int fila, int columna);
	int mayor( int fila, int columna);
};

