// dowhile.cpp -- v�stupn� podm�nka cyklu
#include <iostream>
int main()
{
	using namespace std;
	int n;

	cout << "Zadavejte cisla v rozmezi 1-10, abyste nasli ";
	cout << "me oblibene cislo\n";
	do
	{
		cin >> n; 			// prov�d� t�lo
	} while (n != 7); 	// potom testuje
	cout << "Ano, 7 je me oblibene cislo.\n" ;
	
	return 0;
}
