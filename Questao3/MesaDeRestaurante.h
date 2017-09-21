#ifndef MESADERESTAURANTE_H_
#define MESADERESTAURANTE_H_

#include <iostream>
#include "Pedido.h"
#define MAX_PEDIDOS 100
using namespace std;

class MesaDeRestaurante {
private:
	Pedido pedido[MAX_PEDIDOS];
	int auxiliar = 0;

public:
	void adiconaAoPedido();
	void zeraPedidos();
	double calculaPedidos();
	MesaDeRestaurante();
};

#endif /* MESADERESTAURANTE_H_ */
