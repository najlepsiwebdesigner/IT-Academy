// newstrct.cpp -- pou�it� new se strukturou
#include <iostream>
struct inflatable 		// �ablona struktury
{
char name[20];
float volume;
double price;
};
int main()
{
	using namespace std;
	inflatable * ps = new inflatable; 		// alokuje prostor pro strukturu
	cout << "Zadejte jmeno nafukovaciho predmetu: ";
	cin.get(ps->name, 20); 							// metoda 1 pro p��stup ke �lenu
	cout << "Zadejte objem v litrech: ";
	cin >> (*ps).volume; 								// metoda 2 pro p��stup ke �lenu
	cout << "Zadejte cenu v Kc: ";
	cin >> ps->price;
	cout << "Jmeno: " << (*ps).name << endl; 				// metoda 2
	cout << "Objem: " << ps->volume << " litru\n";		// metoda 1
	cout << "Cena: " << ps->price << " Kc" << endl; 					// metoda 1
	delete ps;												// uvoln�n� pam�ti pou�it� strukturou
	return 0;
}
