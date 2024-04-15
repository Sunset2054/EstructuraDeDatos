#pragma once
#include <iostream>
#include <string>
#define MAX 5
using namespace std;
struct datos {
	double codigo;
	string pedido;
};
class Cola
{
public:
	datos cola[MAX];
	int frente;
	int final;
	Cola();
	void anadirpedido();
	void pedidoentregado();
	void mostrarordenes();
	bool vacio();
	bool llena();
};
