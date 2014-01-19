// file1.cpp -- p��klad dvousouborov�ho programu
#include <iostream>
#include "coordin.h" // �ablony struktur, prototypy funkc�
using namespace std;
int main()
{
	rect rplace;
	polar pplace;

	cout << "Zadejte hodnoty x a y: ";
	while (cin >> rplace.x >> rplace.y) 	// �hledn� pou�it� cin
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Dalsi dve cisla (q pro ukonceni): ";
	}
	cout << "Hotovo!\n";
	return 0;
}
