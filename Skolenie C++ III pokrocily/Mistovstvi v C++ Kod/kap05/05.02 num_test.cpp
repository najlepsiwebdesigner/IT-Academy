// num_test.cpp -- pou�ijte numerick� test v cyklu for
#include <iostream>
int main()
{
	using namespace std;
	cout << "Zadejte pocatecni odpocitavaci hodnotu: ";
	int limit;
	cin >> limit;
	int i;
	for (i = limit; i; i--) 	// konec, kdy� je i rovno 0
		cout << "i = " << i << "\n";
	cout << "Hotovo, nyni je i = " << i << "\n";
	
	return 0;
}
