// exceed.cpp -- p�ekro�en� n�kter�ch celo��seln�ch omezen�
#include <iostream>
#define ZERO 0 			// symbol ZERO bude m�t hodnotu 0
#include <climits> 	// definuje INT_MAX jako nejv�t�� celo��selnou hodnotu
int main()
{
	using namespace std;
	short sam = SHRT_MAX; 			// inicializuje prom�nnou na maxim�ln� hodnotu
	unsigned short sue = sam; 	// v po��dku, je-li prom�nn� sam ji� definov�na

	cout << "Sam ma ulozeno " << sam << " dolaru a Sue " << sue;
	cout << " dolaru." << endl
			<< "Na kazdy ucet pridame 1 dolar." << endl << "Nyni ";
	sam = sam + 1;
	sue = sue + 1;
	cout << "ma Sam ulozeno " << sam << " dolaru a Sue " << sue;
	cout << " dolaru.\nChudak Sam!" << endl;
	sam = ZERO;
	sue = ZERO;
	cout << "Sam ma ulozeno " << sam << " dolaru a Sue " << sue;
	cout << " dolaru." << endl;
	cout << "Z kazdeho uctu vezmeme 1 dolar." << endl << "Nyni ";
	sam = sam - 1;
	sue = sue - 1;
	cout << "ma Sam ulozeno " << sam << " dolaru a Sue " << sue;
	cout << " dolaru." << endl << "Stastna Sue!" << endl;
	
	return 0;
}
