// sayings2.cpp -- pou�it� ukazatel� na objekty
// p�elo�it spole�n� se string1.cpp
#include <iostream>
#include <cstdlib> // (nebo stdlib.h) pro rand(), srand()
#include <ctime> // (nebo time.h) pro time()
#include "string1.h"
const int ArSize = 10;
const int MaxLen = 81;
int main()
{
	using namespace std;
	String name;
	cout <<" Dobry den, jak se jmenujete?\n>> ";
	cin >> name;

	cout << name << ",zadejte prosim az " << ArSize
			<< "kratkych rceni <empty line to quit>:\n";
	String sayings[ArSize];
	char temp[MaxLen]; // pam�_ pro do�asn� �et�zec
	int i;
	for (i = 0; i < ArSize; i++)
	{
		cout << i+1 << ": ";
		cin.get(temp, MaxLen);
		while (cin && cin.get() != '\n')
		continue;
	if (!cin || temp[0] == '\0') // pr�zdn� ��dek?
		break; // i not incremented
		else
	sayings[i] = temp; // p�et�en� p�i�azen�
	}
	int total = i; // celkov� po�et p�e�ten�ch ��dk�

	if (total > 0)
	{
	cout << "Zadali jste tato rceni:\n";
		for (i = 0; i < total; i++)
			cout << sayings[i] << "\n";

// pou�it� ukazatel� k evidenci nejkrat��ho a prvn�ho �et�zce
		String * shortest = &sayings[0];// inicializace prvn�m objektem
		String * first = &sayings[0];
		for (i = 1; i < total; i++)
		{
			if (sayings[i].length() < shortest->length())
				shortest = &sayings[i];
			if (sayings[i] < *first) // porovn�n� hodnot
				first = &sayings[i]; // p�i�ad� adresu
		}
		cout << "Nejkratsi rceni:\n" << * shortest << endl;
		cout << "Prvni rceni podle abecedy:\n" << * first << endl;

		srand(time(0));
		int choice = rand() % total; // n�hodn� v�b�r indexu
// pou�it� oper�toru new k vytvo�en� objektu t��dy String a jeho inicializace
		String * favorite = new String(sayings[choice]);
		cout << "Moje oblibene rceni:\n" << *favorite << endl;
		delete favorite;
	}
	else
		cout << "Dosla vam rec, co?\n";
	cout << "Nashledanou.\n";
	return 0;
}
