#include <iostream>
using namespace std;

class ViajeTren{
private:
	
public:
	ViajeTren(){
		string ruta;
		int hsalida;
		int asientos;	
	}
	ViajeTren(string _ruta, int _hsalida, int _asientos){
		ruta=_ruta;
		hsalida=_hsalida;
		asientos=_asientos;
	}
	ViajeTren(){
		ruta="Desconocida.";
		hsalida=0;
		asientos=0;
	}
};

int main(int argc, char *argv[]) {
	
	cout<<" 				****Bienvenido a nuestro sitio web****"<<endl;
	cout<<"";
	
	return 0;
}

