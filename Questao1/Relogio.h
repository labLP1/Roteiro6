#ifndef RELOGIO_H
#define RELOGIO_H

#include <iostream>

using namespace std;

class Relogio{
	
	private:	
		float Hora;
		float Min;
		float Seg;

	public:
	       	void setHorario(float h, float m, float s);
		float getHorario();
		void setHora(float H);
		float getHora(); 
		void setMin(float M);
		float getMin(); 
		void setSeg(float S);
		float getSeg(); 
		
};
#endif 


