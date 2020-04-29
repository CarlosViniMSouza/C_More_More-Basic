#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
	/*
		(<<) -> operador de inserção
		(>>) -> operador de extração
	*/
	cout << "Digite um numero: " << endl;
	int num1 = 0;
	cin >> num1;
	
	cout << "Digite outro numero: " << endl;
	int num2 = 0;
	cin >> num2;
	
	cout << "Numero digitado: " << num1 << ";" << num2 << endl;
	
	system("pause");
	
	return 0;
}
