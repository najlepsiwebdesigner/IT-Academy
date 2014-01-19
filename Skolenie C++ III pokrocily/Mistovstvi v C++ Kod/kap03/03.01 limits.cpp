// limits.cpp -- n�kter� hodnoty celo��seln�ch mez�
#include <iostream>
#include <climits> 			// pro star�� syst�my pou�ijte limits.h
int main()
{
	using namespace std;
	int n_int = INT_MAX; 				// inicializace n_int na maxim�ln� hodnotu
													// prom�nn� typu int
	short n_short = SHRT_MAX; 	// symboly jsou definov�ny v souboru climits
	long n_long = LONG_MAX;

	// oper�tor sizeof poskytuje velikost typu nebo prom�nn�
	cout << "int ma " << sizeof (int) << " bajty." << endl;
	cout << "short ma " << sizeof n_short << " bajty." << endl;
	cout << "long ma " << sizeof n_long << " bajty." << endl << endl;

	cout << "Maximalni hodnoty:" << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl << endl;

	cout << "Minimalni hodnota typu int = " << INT_MIN << endl;
	cout << "Bitu na bajt = " << CHAR_BIT << endl;
	
	return 0;
}
