// carrots.cpp .. food processing program
// uses and displays a variable

#include <iostream>

int main()
{
	using namespace std;

	int carrots; 						// deklarace celo��seln� prom�nn�

	carrots = 25; 						// p�i�azen� hodnoty prom�nn�
	cout << "Mam ";
	cout << carrots; 				// v�pis hodnoty prom�nn�
	cout << " mrkvi.";
	cout << endl;
	carrots = carrots - 1; 		// modifikace prom�nn�
	cout << "Krup, krup. Ted mam " << carrots << " mrkvi." << endl;

	return 0;
}
