// protos.cpp -- pou�it� prototyp� a vol�n� funkc�
#include <iostream>
void cheers(int); 							// prototyp: ��dn� n�vratov� hodnota
double cube(double x); 					// prototyp: vrac� hodnotu typu double
int main(void)
{
	using namespace std;
	cheers(5); 									// vol�n� funkce
	cout << "Zadejte cislo: ";
	double side;
	cin >> side;
	double volume = cube(side); 		// vol�n� funkce
	cout << "Krychle o velikosti strany " << side <<" metru ma objem ";
	cout << volume << " metru krychlovych.\n";
	cheers(cube(2)); 						// uk�zka prototypov� ochrany
	return 0;
}

void cheers(int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Slava! ";
	cout << "\n";
}
double cube(double x)
{
	return x * x * x;
}
