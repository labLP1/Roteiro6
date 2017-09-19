#include "Relogio.h"

void Relogio::setHorario(float h,float m,float s)
{
       	setHora(h);
	setMin(m);
	setSeg(s);
	
}

void Relogio::setHora(float H)
{
    Hora = H;
}

void Relogio::setMin(float M)
{
    Min = M;
}

void Relogio::setSeg(float S)
{
    Seg = S;
}

float Relogio::getHora()
{
	return Hora;
}

float Relogio::getMin()
{
	return Min;
}

float Relogio::getSeg()
{
	return Seg;
}


