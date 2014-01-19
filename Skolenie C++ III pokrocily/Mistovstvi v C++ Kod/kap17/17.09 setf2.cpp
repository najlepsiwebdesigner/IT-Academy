// setf2.cpp -- ��zen� form�tov�n� pomoc� funkce setf() se dv�ma parametry
#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	// zarovn�n� vlevo, zobrazen� znam�nka plus, zobrazen� koncov�ch
	// nul, p�esnost na 3 m�sta
	cout.setf(ios_base::left, ios_base::adjustfield);
	cout.setf(ios_base::showpos);
	cout.setf(ios_base::showpoint);
	cout.precision(3);
	// e-notace a ulo�en� p�vodn�ho nastaven� form�tov�n�
	ios_base::fmtflags old = cout.setf(ios_base::scientific,
		ios_base::floatfield);
	cout << "Zarovnani vlevo:\n";
	long n;
	for (n = 1; n <= 41; n+= 10)
	{
		cout.width(4);
		cout << n << "|";
		cout.width(12);
		cout << sqrt(double(n)) << "|\n";
}

	// zm�na na vnit�n� zarovn�n�
	cout.setf(ios_base::internal, ios_base::adjustfield);
	// obnoven� implicitn�ho stylu zobrazen� typu float
	cout.setf(old, ios_base::floatfield);

	cout << "Vnitrni zarovnani:\n";
	for (n = 1; n <= 41; n+= 10)
	{
		cout.width(4);
		cout << n << "|";
		cout.width(12);
		cout << sqrt(double(n)) << "|\n";
	}

	// zarovn�n� vpravo, z�pis s pevn�m odd�lova�em
	cout.setf(ios_base::right, ios_base::adjustfield);
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Zarovnani vpravo:\n";
	for (n = 1; n <= 41; n+= 10)
	{
		cout.width(4);
		cout << n << "|";
		cout.width(12);
		cout << sqrt(double(n)) << "|\n";
	}

	return 0;
}
