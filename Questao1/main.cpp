#include "Relogio.h"
#include <iostream>

using namespace std;

void avancarHorario(float h, float m, float s)
{	
	s++;
	if(s == 59){
		m++;
		s = 0;
	}
	if(m == 59){
		h++;
		m = 0;
	}		
		
}

int main(void)
{
	Relogio horario;
	
	float h=0,m=0,s=0;
	char letra;
	cout << "DIGITE a SE VC DESEJA INSERIR HORARIO(HH:MM:SS) > \nDIGITE b SE DESEJA AVANCAR HORARIO INSERIDO > ";
	cin >> letra;
	if(letra == 'a'){
		cin >> h >> m >> s;
		horario.setHora(h);
		horario.setMin(m);
		horario.setSeg(s);
	}
	if(letra == 'b'){
		avancarHorario(h,m,s);
		cout << horario.getHora() << horario.getMin() << horario.getSeg() << endl; 
	}
 	return 0;
}

	


	
