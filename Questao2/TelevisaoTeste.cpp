#include <iostream>
#include <string>
#include "Televisao.h"

using namespace std;

int main(){
    Televisao tv = Televisao();
    char r;
    int x, c;
    while(1){	
	cout << "Televisao com apenas 9 canais" << endl;
	cout << "CANAL: #" << tv.getCanal();
	cout << "\tVOLUME: " << tv.getVolume() << endl;
	cin >> r;
	cout << "Mudando: " << tv.ehNumero(r) << endl;
        x = tv.ehNumero(r);
        cout << x;
	
		if ( x > 0 ){
			cout << x;
			tv.setCanal( x, 'm' );
		}
		else{
			if( r == 'w' ) tv.setCanal( 1, 'a' );
			if( r == 's' ) tv.setCanal( -1, 'a' );
		}
	
	if( r == 'a' ) tv.setVolume( -1 );
	if( r == 'd' ) tv.setVolume( 1 );
		
			
    }        	
    return 0;	
}
