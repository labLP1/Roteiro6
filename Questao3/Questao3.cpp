#include <iostream>
#include "RestauranteCaseiro.h"
#include "Pedido.h"
#include "MesaDeRestaurante.h"

using namespace std;



int main(){

	

	RestauranteCaseiro mesas;
	mesas.adicionaAoPedido();

	double precoTotal;
	precoTotal = mesas.calculaTotalRestaurante();
	
	cout << "PRECO TOTAL DA MESA > " << precoTotal << endl;
	
	return 0;	

}
