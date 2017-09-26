#ifndef PEDIDO_H_
#define PEDIDO_H_

#include <string>
using namespace std;

class Pedido {
private:
	int numero, quantidade;
	string descricao;
	double preco;

public:
	void setPedido( int numero, string descricao, int quantidade, double preco );
	int getNumero();
	string getDescricao();
	int getQuantidade();
	double getPreco();
};

#endif /* PEDIDO_H_ */
