// swaps.cpp -- z�m�na pomoc� odkaz� a ukazatel�
#include <iostream>
void swapr(int & a, int & b); 	// a, b jsou jin� jm�na prom�nn�ch typu int
void swapp(int * p, int * q); 	// p, q jsou adresy prom�nn�ch typu int
void swapv(int a, int b); 		// a, b jsou nov� prom�nn�
int main()
{
	using namespace std;
	int wallet1 = 300;
	int wallet2 = 350;

	cout << "penezenka1 = Kc " << wallet1;
	cout << " penezenka2 = Kc " << wallet2 << endl;

	cout << "Pouziti odkazu na zamenu obsahu:\n";
	swapr(wallet1, wallet2); 						// p�ed�n� prom�nn�ch
	cout << "penezenka1 = Kc " << wallet1;
	cout << " penezenka2 = Kc " << wallet2 << endl;

	cout << "Pouziti ukazatelu na zamenu obsahu:\n";
	swapp(&wallet1, &wallet2); 					// p�ed�n� adres prom�nn�ch
	cout << "penezenka1 = Kc " << wallet1;
	cout << " penezenka2 = Kc " << wallet2 << endl;

	cout << "Pokus pouziti predani hodnotou:\n";
	swapv(wallet1, wallet2); 						// p�ed�n� hodnot prom�nn�ch
	cout << "penezenka1 = Kc " << wallet1;
	cout << " penezenka2 = Kc " << wallet2 << endl;
	return 0;
}

void swapr(int & a, int & b) 	// pou�it� odkaz�
{
	int temp;

	temp = a; 								// pou�it� a, b pro hodnoty prom�nn�ch
	a = b;
	b = temp;
}

void swapp(int * p, int * q) 	// pou�it� ukazatel�
{
	int temp;

	temp = *p; 								// pou�it� *p, *q pro hodnoty prom�nn�ch
	*p = *q;
	*q = temp;
}

void swapv(int a, int b) 			// zkou�ka pou�it� hodnot
{
	int temp;

	temp = a; 								// pou�it� a, b pro hodnoty prom�nn�ch
	a = b;
	b = temp;
}

