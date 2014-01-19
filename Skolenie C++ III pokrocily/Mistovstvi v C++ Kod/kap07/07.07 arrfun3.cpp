// arrfun3.cpp -- funkce pracuj�c� s poli a kvalifik�tor const
#include <iostream>
const int Max = 5;

// prototypy funkc�
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n); 	// nem�n� data
void revalue(double r, double ar[], int n);

int main()
{
	using namespace std;
	double properties[Max];

	int size = fill_array(properties, Max);
	show_array(properties, size);
	cout << "Zadejte koeficient prehodnoceni: ";
	double factor;
	cin >> factor;
	revalue(factor, properties, size);
	show_array(properties, size);
	cout << "Hotovo.\n";
	return 0;
}

int fill_array(double ar[], int limit)
{
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Zadejte hodnotu c." << (i + 1) << ": ";
		cin >> temp;
		if (!cin) 	// neplatn� vstup
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Neplatny vstup, zadavani ukonceno.\n";
			break;
		}
		else if (temp < 0) // sign�l ukon�en� zad�v�n�
			break;
		ar[i] = temp;
	}
	return i;
}

// n�sleduj�c� funkce m��e pou��vat, ale ne m�nit
// pole, jeho� adresa je ar
void show_array(const double ar[], int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
	{
		cout << "Majetek c." << (i + 1) << ": Kc ";
		cout << ar[i] << endl;
	}
}

// n�sob� ka�d� prvek pole ar[] koeficientem r
void revalue(double r, double ar[], int n)
{
	for (int i = 0; i < n; i++)
		ar[i] *= r;
}
