#ifndef TELEVISAO_H
#define TELEVISAO_H

class Televisao{
     private:
	  int canal;
	  int volume;
     public:
	  void setCanal( int canal, char m );
	  void setVolume( int volume );
	  int getCanal();
          int getVolume();
	  int ehNumero( char n	);
          Televisao();
	
};
#endif
