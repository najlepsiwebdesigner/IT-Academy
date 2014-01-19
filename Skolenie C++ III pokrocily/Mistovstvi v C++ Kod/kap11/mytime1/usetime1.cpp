// usetime1.cpp -- pou�it� druh�ho n�vrhu t��dy Time
// p�ekl�dat se soubory usetime1.cpp a mytime1.cpp 
#include <iostream>
#include "mytime1.h"
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

	total = coding + fixing;
	// z�pis oper�toru
	cout << "programovani + ladeni = ";
	total.Show();
	cout << endl;

	Time morefixing(3, 28);
	cout << "dalsi ladeni = ";
	morefixing.Show();
	cout << endl;
	total = morefixing.operator+(total);
	// z�pis funkce
	cout << "morefixing.operator+(total) = ";
	total.Show();
	cout << endl;

	return 0;
}
