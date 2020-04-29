#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "Entrou e saiu este argumento..." << endl;
	cout << hex << 20 + 30 << endl; //mostra o endereço dos digitos;
	cout << setw(10) << 20 + 30 << endl; // espalha numeros aleatoriamente;
	cout << setw(10) << 33;
	cout << setw(10) << 33;
	cout << setw(10) << 33;
	
	return 0;
	
	system("pause");
}
