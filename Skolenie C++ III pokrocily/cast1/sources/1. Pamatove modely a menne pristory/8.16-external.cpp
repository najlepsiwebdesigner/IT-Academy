// external.cpp -- vn�j�� (extern�) prom�nn�
#include <iostream>
using namespace std;
// vn�j�� prom�nn�
double otepleni = 0.3;

// funk�n� prototypy
void update(double dt);
void local();

int main() 				// pou��v� glob�ln� prom�nnou
{
	cout << "Globalni promenna otepleni je " << otepleni << " stupnu.\n";
	update(0.1); 		// vyvol�n� funkce na zm�nu prom�nn� otepleni
	cout << "Globalni promenna otepleni je " << otepleni << " stupnu.\n";
	local(); 				// vyvol�n� funkce na lok�ln� prom�nnou otepleni
	cout << "Globalni promenna otepleni je " << otepleni << " stupnu.\n";
	
	return 0;
}

void update(double dt) 		// modifikuje glob�ln� prom�nnou
{
	extern double otepleni; // voliteln� op�tn� deklarace
	otepleni += dt;
	cout << "Zmena globalni promenne otepleni na " << otepleni;
	cout << " stupnu.\n";
}

void local() // pou��v� lok�ln� prom�nnou
{
	double otepleni = 0.8; // nov� prom�nn� skr�v� vn�j�� prom�nnou

	cout << "Lokalni promenna otepleni = " << otepleni << " stupnu.\n";
			// P��stup ke glob�ln� prom�nn� pomoc�
			// oper�toru na rozli�en� platnosti
	cout << "Ale globalni promenna otepleni = " << ::otepleni;
	cout << " stupnu.\n";
}
