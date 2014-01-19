// strings.cpp -- uklada retezce do pole
#include <iostream>
#include <cstring> 							// pro funkci strlen()
int main()
{
	using namespace std;
	const int Size = 15;
	char name1[Size]; 							// pr�zdn� pole
	char name2[Size] = "C++owboy"; 	// inicializovan� pole
	// Pozn�mka: n�kter� implementace mohou vy�adovat
	// pro inicializaci pole name2 kl��ov� slovo static

	cout << "Ahoj! Jmenuji se " << name2;
	cout << "! Jak se jmenujete vy?\n";
	cin >> name1;
	cout << "Dobre, " << name1 << ", vase jmeno obsahuje ";
	cout << strlen(name1) << " znaku a je ulozeno\n";
	cout << "v poli o velikosti " << sizeof name1 << " bajtu.\n";
	cout << "Pocatecni pismeno vaseho jmena je " << name1[0] << ".\n";
	name2[3] = '\0'; 							// nulov� znak
	cout << "Toto jsou prvni tri pismena meho jmena: ";
	cout << name2 << endl;
	
	return 0;
}
