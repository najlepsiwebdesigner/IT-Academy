// delete.cpp -- pou�it� oper�toru delete
#include <iostream>
#include <cstring> 			// nebo string.h
using namespace std;
char * getname(void); 		// funk�n� prototyp
int main()
{
	char * name; 					// vytv��� ukazatel, ale nealokuje pam�

	name = getname(); 			// p�i�azuje adresu �et�zce do name
	cout << name << " na adrese " << (int *) name << "\n";
	delete [] name; 				// uvolnil pam�

	name = getname(); 			// nov� pou�it� uvoln�n� pam�ti
	cout << name << " na adrese " << (int *) name << "\n";
	delete [] name; 				// op�t uvolnil pam�
	return 0;
}

char * getname() 				// vrac� ukazatel nov�mu �et�zci
{
	char temp[80]; 				// do�asn� pam�
	cout << "Zadejte prijmeni: ";
	cin >> temp;
	char * pn = new char[strlen(temp) + 1];
	strcpy(pn, temp); 			// kop�ruje �et�zec do men��ho prostoru

	return pn; 						// temp se ztr�c�, kdy� funkce kon��
}
