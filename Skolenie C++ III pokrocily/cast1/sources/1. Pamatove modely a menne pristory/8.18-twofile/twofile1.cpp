// twofile1.cpp -- prom�nn� s vn�j�� a vnit�n� vazbou
#include <iostream> // bude p�ekl�d�n se souborem twofile2.cpp
int tom = 3; // definice vn�j�� prom�nn�
int dick = 30; // definice vn�j�� prom�nn�
static int harry = 300; // statick� prom�nn�, vnit�n� vazba

// prototyp funkce
void remote_access();

int main()
{
	using namespace std;
	cout << "main() podava zpravu o nasledujicich adresach:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
	remote_access();
	
	return 0;
}
