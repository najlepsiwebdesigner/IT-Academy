// arith.cpp -- nekter� aritmeticke vypocty v C++
#include <iostream>
int main()
{
	using namespace std;
	float klobouky, hlavy;
	cout.setf(ios_base::fixed, ios_base::floatfield); // pevn� ��dov� te�ka
	cout << "Zadejte cislo: ";
	cin >> klobouky;
	cout << "Zadejte dalsi cislo: ";
	cin >> hlavy;

	cout << "klobouky = " << klobouky << "; hlavy = " << hlavy << endl;
	cout << "klobouky + hlavy = " << klobouky + hlavy << endl;
	cout << "klobouky - hlavy = " << klobouky - hlavy << endl;
	cout << "klobouky * hlavy = " << klobouky * hlavy << endl;
	cout << "klobouky / hlavy = " << klobouky / hlavy << endl;
	
	return 0;
}
