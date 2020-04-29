#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
	
	cout << "Insira 1 numero: " << endl;
	int x = 0;
	cin >> x;
	
	cout << "Insira outro numero: " << endl;
	int y = 0;
	cin >> y;
	
	cout << "A operacao (x+y) deu por resultado:" << x + y <<endl;
	cout << "A operacao (x-y) deu por resultado:" << x - y <<endl;
	cout << "A operacao (x*y) deu por resultado:" << x * y <<endl;
	
	double z = x/y;
	cin >> z;
	cout << "A operacao (x/y) deu por resultado:" << z <<endl;
	
	system("pause");
	
	return 0;
}
