// structur.cpp -- jednoduch� struktura
#include <iostream>
struct inflatable // �ablona struktury
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	using namespace std;
	inflatable guest =
	{
		"Glorious Gloria", // hodnota name
		1.88, 						// hodnota volume
		29.99 						// hodnota price
	}; 								// guest je strukturn� prom�nnou typu inflatable
// inicializuje se uveden�mi hodnotami
	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99
	}; 	// pal je druhou prom�nnou typu inflatable
// Pozn�mka: n�kter� implementace vy�aduj� pou�it�
// static inflatable guest =

	cout << "Rozsirte vas seznam hostu o " << guest.name;
	cout << " a " << pal.name << "!\n";
// z�pis pal.name znamen�, �e name je �lenem prom�nn� pal
	cout << "Oba ziskate za ";
	cout << (guest.price + pal.price) << " Kc!\n";
	
	return 0;
}
