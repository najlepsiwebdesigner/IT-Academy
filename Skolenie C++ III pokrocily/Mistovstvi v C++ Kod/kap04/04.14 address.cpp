// address.cpp -- pou�it� oper�toru & na zji�t�n� adresy
#include <iostream>
int main()
{
	using namespace std;
	int donuts = 6;
	double cups = 4.5;

	cout << "hodnota promenne donuts = " << donuts;
	cout << " a adresa promenne donuts = " << &donuts << endl;
// Pozn�mka: mo�n� budete muset pou��t unsigned (&donuts)
// a unsigned (&cups)
	cout << "hodnota promenne cups = " << cups;
	cout << " a adresa promenne cups = " << &cups << endl;
	
	return 0;
}
