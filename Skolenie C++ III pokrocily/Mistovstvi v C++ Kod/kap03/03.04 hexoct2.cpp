// hexoct2.cpp - v�pis hexadecim�ln�ch a oktalov�ch hodnot
#include <iostream>
using namespace std;
int main()
{
	using namespace std;
	int chest = 76;
	int waist = 76;
	int inseam = 76;

	cout << "Pan ma pozoruhodnou postavu!" << endl;
	cout << "hrudnik = " << chest << " (dekadicky)" << endl;
	cout << hex; 				// manipula�n� symbol pro zm�nu z�kladu ��seln� soustavy
	cout << "pas = " << waist << " hexadecimalne" << endl;
	cout << oct; 				// manipula�n� symbol pro zm�nu z�kladu ��seln� soustavy
	cout << "sed = " << inseam << " (oktalove)" << endl;
	return 0;
}
