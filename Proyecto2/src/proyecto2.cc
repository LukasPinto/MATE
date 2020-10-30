#include <global.h>
#include <checkArgs.hpp>
#include <memory>
using namespace std;
uint32_t tamTablero;
int32_t cantIteraciones;
float proCelulasVivas;
int main(int argc, char** argv){

	std::shared_ptr<checkArgs> argumentos = (std::shared_ptr<checkArgs>) new checkArgs(argc, argv);

	tamTablero = argumentos->getArgs().tamTablero;
	cantIteraciones = argumentos->getArgs().cantIteraciones;
	proCelulasVivas = argumentos->getArgs().proCelulasVivas;
	cout << tamTablero << ":" << cantIteraciones << ":" << proCelulasVivas << "\n";
	int matriz[tamTablero+1][tamTablero+1];
	for (uint32_t i = 0; i < tamTablero; i++){
		for (uint32_t j = 0; j < tamTablero; j++)
		{
			matriz[i][j]=0;
		}
		
	}// se rellena la matriz con 0
	for (uint32_t i = 0; i < tamTablero; i++){
		for (uint32_t j = 0; j < tamTablero; j++)
		{
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}
	
	
	

	return 0;
}
