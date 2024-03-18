#include <iostream>
#include "Matriz.h"

#define MAX 20

using namespace std;

int main() {
	int opc, prom, fil, col;
	Matriz MAT;
	do {
		cout << "Ingrese el numero de filas: ";
		cin >> fil;
	} while ((fil <= 0) || (fil > MAX));
	MAT.set_fil(fil);
	do {
		cout << "Ingrese el numero de columnas: ";
		cin >> col;
	} while ((col <= 0) || (col > MAX));
	MAT.set_col(col);
	//Menu
	do {
		
		cout << "\t Menu\n";
		cout << "\t ====\n\n";
		cout << "(1) Cargar Matriz\n";
		cout << "(2) Mostrar Matriz\n";
		cout << "(3) Promedio Matriz\n";
		cout << "(4) Mayor Matriz\n";
		cout << "(0) Salir\n";
		cout << "Opcion:";
		cin >> opc;
		switch (opc) {
		case 1: MAT.cargarmat(fil, col);
			break;
		case 2: MAT.mostrarmat(fil, col);
			break;
		case 3: prom = MAT.promedio(fil, col);
			cout << "El valor promedio es: " << prom;
			break;
		case 4: cout << "El mayor es: " << MAT.mayor(fil, col);
			break;
		case 0: cout << "Salir\n";
			break;
		default: cout << "Error\n";
			break;
		}
	} while (opc != 0);

	return 0;
}
