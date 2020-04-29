#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
	/*
	short
	long 
	Singed
	Unsinged
	*/
	
	int a = 0;
	short int b = 0;
	long int c = 0;
	
	int a2 = 0;
	signed int b2 = 20;
	unsigned int c2 = 30;
	
	cout << "Memoria Ocupada: " << sizeof(a) << " -- numero apres.:" << a << endl;
	cout << "Memoria Ocupada: " << sizeof(b) << " -- numero apres.:" << b << endl;
	cout << "Memoria Ocupada: " << sizeof(c) << " -- numero apres.:" << c << endl;
	//verificando sizeof() da variavel_2
	cout << "Memoria Ocupada: " << sizeof(a2) << " -- numero apres.:" << a2 << endl;
	cout << "Memoria Ocupada: " << sizeof(b2) << " -- numero apres.:" << b2 << endl;
	cout << "Memoria Ocupada: " << sizeof(c2) << " -- numero apres.:" << c2 << endl;
	
	system("pause");
	
	return 0;
}
