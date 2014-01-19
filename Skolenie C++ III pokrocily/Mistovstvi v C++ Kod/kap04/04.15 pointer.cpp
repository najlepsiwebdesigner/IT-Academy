// pointer.cpp -- na�e prvn� ukazatelov� prom�nn�
#include <iostream>
int main()
{
	using namespace std;
	int updates = 6; 			// deklaruje prom�nnou
	int * p_updates; 			// deklaruje ukazatel na int

	p_updates = &updates; 	// p�i�azuje adresu int ukazateli

// vyjad�uje hodnoty dv�ma zp�soby
	cout << "Hodnoty: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

// vyjad�uje hodnoty dv�ma zp�soby
	cout << "Adresy: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

// pou��v� ukazatel na zm�nu hodnoty
	*p_updates = *p_updates + 1;
	cout << "Promenna updates nyni = " << updates << endl;
	
	return 0;
}
