// cingolf.cpp -- p�esko�en� nenumerick�ho vstupu
#include <iostream>
const int Max = 5;
int main()
{
	using namespace std;
// z�sk�n� dat
	int golf[Max];
	cout << "Prosim, zadejte skore v golfu.\n";
	cout << "Musite zadat " << Max << " her.\n";
	int i;
	for (i = 0; i < Max; i++)
	{
		cout << "hra c." << i+1 << ": ";
		while (!(cin >> golf[i])) {
			cin.clear(); // obnoven� vstupu
			while (cin.get() != '\n')
				continue; // zahozen� chybn�ch vstupn�ch dat
			cout << "Prosim, zadejte cislo: ";
		}
	}
// v�po�et pr�m�ru
	double total = 0.0;
	for (i = 0; i < Max; i++)
	total += golf[i];
// zobrazen� v�sledk�
	cout << total / Max << " = prumerne skore za "
			<< Max << " her\n";
	
	return 0;
}
