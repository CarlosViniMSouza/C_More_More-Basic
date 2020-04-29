#include <iostream>

using namespace std;

int main()
{
	int a = 2;
	char b = 'B';
	float c = 2.22;
	double d  = 3.33;
	
	cout << "\nO conteudo na variavel 'a':" << a << endl;
	cout << "O conteudo na variavel 'b':" << b << endl;
	cout << "O conteudo na variavel 'c':" << c << endl;
	cout << "O conteudo na variavel 'd':" << d << endl;
	
	cout << "\nA memoria ocupada pela variavel 'a':" << sizeof(a) << endl;
	cout << "A memoria ocupada pela variavel 'b':" << sizeof(b) << endl;
	cout << "A memoria ocupada pela variavel 'c':" << sizeof(c) << endl;
	cout << "A memoria ocupada pela variavel 'd':" << sizeof(d) << endl;
	
	system("pause");
	return 0;
} 
