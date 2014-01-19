// exc_mean.h -- t��dy v�jimek pro hmean(), gmean()
#include <iostream>

class bad_hmean
{
private:
	double v1;
	double v2;
public:
	bad_hmean(double a = 0, double b = 0) : v1(a), v2(b){}
	void mesg();
};

inline void bad_hmean::mesg()
{
	std::cout << "hmean(" << v1 << ", " << v2 <<"): "
					<< "chybne argumenty: a = -b\n";
}

class bad_gmean
{
public:
	double v1;
	double v2;
	bad_gmean(double a = 0, double b = 0) : v1(a), v2(b){}
	const char * mesg();
};

inline const char * bad_gmean::mesg()
{
	return "argumenty gmean() musi byt >= 0\n";
}
V�pis 15.11 error4.cpp
//error4.cpp
#include <iostream>
#include <cmath> // nebo math.h, v Unixu mo�n� -lm
#include "exc_mean.h"
// function prototypes
double hmean(double a, double b) throw(bad_hmean);
double gmean(double a, double b) throw(bad_gmean);
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z;

	cout << "Zadejte dve cisla: ";
	while (cin >> x >> y)
	{
		try { 												// za��tek bloku try
			z = hmean(x,y);
			cout << "Harmonicky prumer cisel " << x << " a " << y
					<< " je " << z << endl;
			cout << "Geometricky prumer cisel " << x << " a " << y
					<< " je " << gmean(x,y) << endl;
			cout << "Zadejte dalsi mnozinu cisel <k pro ukonceni>: ";
		} 															// konec bloku try
		catch (bad_hmean & bg) // za��tek z�chytn�ho bloku
		{
			bg.mesg();
			cout << "Opakujte.\n";
			continue;
		}
		catch (bad_gmean & hg)
		{
			cout << hg.mesg();
			cout << "Pou�it� hodnoty: " << hg.v1 << ", "
					<< hg.v2 << endl;
			cout << "Bohuzel, dal se nedostanete. ";
			break;
		} // konec z�chytn�ho bloku
	}
	cout << "Nashledanou!\n";
	return 0;
}

double hmean(double a, double b) throw(bad_hmean)
{
	if (a == -b)
		throw bad_hmean(a,b);
	return 2.0 * a * b / (a + b);
}
double gmean(double a, double b) throw(bad_gmean)
{
	if (a < 0 || b < 0)
		throw bad_gmean(a,b);
	return std::sqrt(a * b);
}
