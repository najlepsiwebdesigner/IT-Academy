// twofile2.cpp -- prom�nn� s vnit�n� a vn�j�� vazbou
#include <iostream>
extern int tom; // prom�nn� tom definovan� jinde
static int dick = 10; // p�ekr�v� vn�j�� prom�nnou dick
int harry = 200; // definice vn�j�� prom�nn�,
// bez konfliktu s prom�nnou harry v twofile1

void remote_access()
{
	using namespace std;
	cout << "remote_access() podava zpravu o nasledujicich adresach:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
}
