#include <iostream>
#include "Cola.h"
using namespace std;
Cola::Cola() {
	frente = -1;
	final = -1;
}
void Cola::anadirpedido() {
	if (frente == -1) {
		string ped;
		double cod;
		frente++;
		final++;
		cout << "Ingrese el código del pedido" << endl; cin >> cod;
		cola[frente].codigo = cod;
		cout << "Ingrese el Nombre del pedido" << endl;
		cin.ignore();
		getline(cin, ped);
		cola[frente].pedido = ped;
	}
	else if (!llena()) {
		string ped;
		double cod;
		frente++;
		cout << "Ingrese el código del pedido" << endl; cin >> cod;
		cola[frente].codigo = cod;
		cout << "Ingrese el Nombre del pedido" << endl;
		cin.ignore();
		getline(cin, ped);
		cola[frente].pedido = ped;
	}
}
void Cola::pedidoentregado() {
	if (!vacio()) {
		frente = frente - 1;
	}
}
bool Cola::vacio() {
	if (frente == -1 && final == -1) {
		return true;
	}
	else return false;
}
void Cola::mostrarordenes () {
	if (!vacio()) {}
	cout << "Pedidos Actuales: " << endl;
		for (int i = final; i <= frente; i++) {
			cout << "Pedido : " << i + 1 << cola[i].pedido << " ; Código : " << cola[i].codigo << endl;
		}
	}


bool Cola::llena() {
	if (frente == MAX - 1) {
		return true;
	}
	else {
		return false;
	}
}
