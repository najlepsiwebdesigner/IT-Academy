// usetime3.cpp -- pou�it� �tvrt�ho n�vrhu t��dy Time
// spole�n� kompilace soubor� usetime3.cpp a mytime3.cpp
#include <iostream>
#include "mytime3.h"
int main()
{
	using std::cout;
	using std::endl;
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;

	cout << "Aida a Tosca:\n";
	cout << aida<<"; " << tosca << endl;
	temp = aida + tosca; 										// oper�tor+()
	cout << "Aida + Tosca: " << temp << endl;
	temp = aida* 1.17; 										// �lensk� oper�tor*()
	cout << "Aida * 1.17: " << temp << endl;
	cout << "10 * Tosca: " << 10 * tosca << endl;

	return 0;
}
