// usetime0.cpp -- pou�it� prvn�ho n�vrhu t��dy Time
// spole�n� kompilace soubor� usetime0.cpp a mytime0.cpp
#include <iostream>
#include "mytime0.h"
int main()
{
	using std::cout;
	using std::endl;
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout << "planovani = ";
	planning.Show();
	cout << endl;

	cout << "programovani = ";
	coding.Show();
	cout << endl;

	cout << "ladeni = ";
	fixing.Show();
	cout << endl;

	total = coding.Sum(fixing);
	cout << "coding.Sum(fixing) = ";
	total.Show();
	cout << endl;

	return 0;
}
