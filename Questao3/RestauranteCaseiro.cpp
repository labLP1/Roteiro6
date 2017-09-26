#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro(){
	this->zerarMesas();
}

double RestauranteCaseiro::calculaTotalRestaurante(){
	double soma = 0.0;
	int i = 0;
	for( i = 0; i < MAX_MESAS; i++){
		soma += this->mesa[i].calculaPedidos();
	}
	return soma;
}

void RestauranteCaseiro::zerarMesas(){
	int i;
	for( i = 0; i < MAX_MESAS; i++ ){
		this->mesa[i].zeraPedidos();
	}
	this->auxiliar = 0;
}

void RestauranteCaseiro::adicionaAoPedido(){
	int i=0;
	this->mesa[i++].adicionaAoPedido();
}
















