// ourfunc.cpp -- definov�n� vlastn� funkce
#include <iostream>
void simon(int); 			// funk�n� prototyp pro simon()

int main()
{
	using namespace std;
	simon(3); 					// vol�n� funkce simon()
	cout << "Vyberte si cele cislo: ";
	int count;
	cin >> count;
	simon(count); 				// op�tovn� vol�n�
	cout << "Hotovo!" << endl;
	return 0;
}

void simon(int n) 			// definice funkce simon()
{
	using namespace std;
	cout << "Simon rika, abyste se dotknul prstu u nohou " << n << " krat. " 
	<< endl;
} 										// funkce void nemus� b�t ukon�eny p��kazem return
