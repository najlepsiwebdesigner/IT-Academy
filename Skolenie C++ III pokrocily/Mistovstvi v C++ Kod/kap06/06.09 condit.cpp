// condit.cpp -- pou�it� podm�n�n�ho oper�toru
#include <iostream>
int main()
{
	using namespace std;
	int a, b;
	cout << "Zadejte dve cela cisla: ";
	cin >> a >> b;
	cout << "Vetsi z cisel " << a << " a " << b;
	int c = a > b ? a : b; 			// c = a jestli�e a > b, jinak c = b
	cout << " je " << c << endl;
	return 0;
}
