// strgback.cpp -- funkce, kter� vrac� ukazatel na char
#include <iostream>
char * buildstr(char c, int n); 						// prototyp
int main()
{
	using namespace std;
	int times;
	char ch;

	cout << "Zadejte znak: ";
	cin >> ch;
	cout << "Zadejte cele cislo: ";
	cin >> times;
	char *ps = buildstr(ch, times);
	cout << ps << "\n";
	delete [] ps; // uvoln�n� pam�ti
	ps = buildstr('+', 20); 								// znovupou�it� ukazatele
	cout << ps << "-HOTOVO-" << ps << endl;
	delete [] ps; 													// uvoln�n� pam�ti
	return 0;
}

// vytv��� �et�zec o n znac�ch c
char * buildstr(char c, int n)
{
	char * pstr = new char[n + 1];
	pstr[n] = '\0'; 												// ukon�en� �et�zce
	while (n-- > 0)
		pstr[n] = c; 												// napln� zbytek �et�zce
	return pstr;
}
