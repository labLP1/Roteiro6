/*
 * RestauranteCaseiro.h
 *
 *  Created on: 20/09/2017
 *      Author: Raphael
 */

#ifndef RESTAURANTECASEIRO_H_
#define RESTAURANTECASEIRO_H_

#include "MesaDeRestaurante.h"
#include <string>
#define MAX_MESAS 100
using namespace std;

class RestauranteCaseiro {
private:
	int auxiliar = 0;
	MesaDeRestaurante mesa[MAX_MESAS];

public:
	void adicionaAoPedido();
	double calculaTotalRestaurante();
	void zerarMesas();
	RestauranteCaseiro();
};

#endif /* RESTAURANTECASEIRO_H_ */
