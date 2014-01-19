// setf.cpp -- ��zen� form�tov�n� pomoc� funkce setf()
#include <iostream>

int main()
{
	using std::cout;
	using std::endl;
	using std::ios_base;

	int temperature = 17;

	cout << "Dnesni teplota vody: ";
	cout.setf(ios_base::showpos); // vyp�e znam�nko plus
	cout << temperature << endl;

	cout << "Pro nase programovaci pratele to je \n";
	cout << std::hex << temperature << endl; // �estn�ctkov�
	cout.setf(ios_base::uppercase); // �estn�ctkov� velk� p�smena
	cout.setf(ios_base::showbase); // �estn�ctkov� s p�edponou 0X
	cout << "nebo\n";
	cout << temperature << endl;
	cout << "Skutecne " << true << "! vlastne - Skutecne ";
	cout.setf(ios_base::boolalpha);
	cout << true << "!\n";

	return 0;
}
