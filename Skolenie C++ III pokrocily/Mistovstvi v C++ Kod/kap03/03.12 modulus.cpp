// modulus.cpp -- pou�it� oper�toru % p�i konverzi liber na kameny
#include <iostream>
int main()
{
	using namespace std;
	const int Lbs_per_stn = 14;
	int lbs;

	cout << "Zadejte svoji vahu v librach: ";
	cin >> lbs;
	int stone = lbs / Lbs_per_stn; // cel� kameny
	int pounds = lbs % Lbs_per_stn; // zbytek v libr�ch
	cout << lbs << " liber je " << stone
			<< " kamenu, " << pounds << " liber.\n";
			
	return 0;
}
