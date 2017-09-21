#include "Televisao.h"

Televisao::Televisao(){
     this->canal = 1;
     this->volume = 0;	
}

void Televisao::setCanal( int canal, char a ){
     if( a == 'a' ) this->canal += canal;
     if( a == 'm' ) this->canal = canal;
     if( this->canal < 1 ) this->canal = 1;	
}

void Televisao::setVolume( int volume ){
     if( this->volume >= 0 && this->volume <= 100 ) this->volume += volume;
     if( this->volume < 0 ) this->volume = 0;
     if( this->volume > 100 ) this->volume = 100;	
}

int Televisao::getCanal(){ return this->canal; }
int Televisao::getVolume(){ return this->volume; }

int Televisao::ehNumero( char n ){
    int i;  
    for (i = 1; i < 10 ; i++) if( n == 48 + i ) return i;
    return 0; 	
}
