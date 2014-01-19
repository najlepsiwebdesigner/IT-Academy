// floatnum.cpp - typy s pohyblivou radovou carkou
#include <iostream>
int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield); // pevn� ��rka
	float tub = 10.0 / 3.0; 											// p�esnost asi 6 m�st
	double mint = 10.0 / 3.0; 										// p�esnost asi 15 m�st
	const float million = 1.0e6;

	cout << "skopek = " << tub;
	cout << ", milion skopku = " << million * tub;
	cout << ",\na deset milionu skopku = ";
	cout << 10 * million * tub << endl;

	cout << "ranec = " << mint << " a milion rancu = ";
	cout << million * mint << endl;

	return 0;
}
