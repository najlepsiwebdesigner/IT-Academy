// inline.cpp -- pou�it� vlo�en� (inline) funkce
#include <iostream>

// vlo�en� funkce mus� b�t definov�na p�ed sv�m prvn�m pou�it�m
inline double square(double x) { return x * x; }

int main()
{
	using namespace std;
	double a, b;
	double c = 13.0;

	a = square(5.0);
	b = square(4.5 + 7.5); 				// m��e se p�edat v�raz
	cout << "a = " << a << ", b = " << b << "\n";
	cout << "c = " << c;
	cout << ", c na druhou = " << square(c++) << "\n";
	cout << "Nyni c = " << c << "\n";
	return 0;
}
