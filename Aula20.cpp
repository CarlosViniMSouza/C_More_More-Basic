#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
	bool cond1 = true;
	bool cond2 = (12 == 12);
	bool cond3 = (3 >= 4);
	
	cout << "O valor contido em cond1 eh: " << cond1 << endl; //é verdadeiro
	cout << "O valor contido em cond2 eh: " << cond2 << endl; //é verdadeiro
	cout << "O valor contido em cond3 eh: " << cond3 << endl; //é falso
	//verdadeiro => 1; falso => 0;
	
	system("pause");
	
	return 0;
}
