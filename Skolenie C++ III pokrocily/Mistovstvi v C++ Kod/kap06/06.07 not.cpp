// not.cpp -- pou�it� oper�toru NE (NOT)
#include <iostream>
#include <climits>
bool is_int(double);
int main()
{
	using namespace std;
	double num;

	cout << "Hele, frajere! Zadej celociselnou hodnotu: ";
	cin >> num;
	while (!is_int(num)) 							// pokra�ov�n�, dokud nen� num v rozsahu
	{ 															// platnosti typu int
		cout << "Mimo rozsah -- zkus to prosim znovu: ";
		cin >> num;
	}
	int val = num;
	cout << "Zadal jsi cele cislo " << val << "\nAhoj\n";
	return 0;
}

bool is_int(double x)
{
	if (x <= INT_MAX && x >= INT_MIN) 	// pou�it� hodnot z climits
		return true;
	else
		return false;
}
