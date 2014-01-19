// ptrstr.cpp -- pou�it� ukazatel� na �et�zce
#include <iostream>
#include <cstring> // deklaruje strlen(), strcpy()
int main()
{
	using namespace std;
	char animal[20] = "medved"; 			// animal obsahuje medved
	const char * bird = "strizlik"; 	// bird obsahuje adresu �et�zce
	char * ps; 										// neinicializov�no

	cout << animal << " a "; 	// zobraz� medved
	cout << bird << "\n"; 		// zobraz� strizlik
	// cout << ps << "\n";		// m��e zobrazit nesmysl nebo zp�sobit p�d programu

	cout << "Zadejte druh zvirete: ";
	cin >> animal; 						// v po��dku pokud je vstup krat�� ne� 20 znak�
	// cin >> ps; Velmi hrub� chyba;
	// ps neukazuje na alokovan� prostor

	ps = animal; 						// nastav� ps, aby ukazoval na �et�zec
	cout << ps << "!\n"; 			// v po��dku, stejn� jako pou�it� animal
	cout << "Pred pouzitim strcpy():\n";
	cout << animal << " je na adrese " << (int *) animal << endl;
	cout << ps << " je na adrese " << (int *) ps << endl;

	ps = new char[strlen(animal) + 1]; // z�sk� novou pam�
	strcpy(ps, animal); // kop�ruje �et�zec do nov� pam�ti
	cout << "Po pouziti strcpy():\n";
	cout << animal << " je na adrese " << (int *) animal << endl;
	cout << ps << " je na adrese " << (int *) ps << endl;
	delete [] ps;
	
	return 0;
}
