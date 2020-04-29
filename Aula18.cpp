#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
	// vamos montar uma calculadora:
	
	int n_1, n_2, soma, sub, mult, div, mod_div;
	char op, resp, S, N;
	
	cout << "Calculadora feita por &Carlos Souza\n\n";
	
	cout << "Digite um numero inteiro qualquer: " <<  endl;
	cin >> n_1;
	
	cout << "Digite outro numero inteiro: " << endl;
	cin >> n_2;
	
	cout << "selecione +, -, *, / ou %: " << endl;
	cin >> op;
	
	do {
			
	switch(op)
	{
	case '+' : soma = n_1 + n_2;
	cout << "A soma eh: " << soma << endl;
	break;
	
	case '-' : sub = n_1 - n_2;
	cout << "A subtracao eh: " << sub << endl;
	break;
	
	case '*' : mult = n_1 * n_2;
	cout << "O produto eh: " << mult << endl;
	break;
	
	case '/' : div = n_1 / n_2;
	cout << "A divisao eh: " << div << endl;
	break;
	
	case '%' : mod_div = n_1 % n_2;
	cout << "A modulo da divisao(resto) eh: " << div << endl;
	break;
    }
    
    cout << "Queres repetir o processo(S-> Sim; N-> Nao)?:" << endl;
	cin >> resp; 
	
	}while(resp == S);
	
	system("pause");
	return 0;
}
