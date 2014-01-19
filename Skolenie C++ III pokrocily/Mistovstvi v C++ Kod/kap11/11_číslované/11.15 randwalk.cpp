// randwalk.cpp -- pou�it� t��dy Vector
// kompilovat spole�n� se souborem vect.cpp
#include <iostream>
#include <cstdlib> 	// prototypy funkc� rand(), srand()
#include <ctime> 		// prototyp funkce time()
#include "vect.h"
int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0)); 		// nastaven� gener�toru n�hodn�ch ��sel
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << " Zadej cilovou vzdalenost (q pro ukon�en�): ";
	while (cin >> target)
	{
		cout << " Zadej delku kroku: ";
		if (!(cin >> dstep))
			break;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.set(dstep, direction, 'p');
			result = result + step;
			steps++;
		}
		cout << "Po " << steps << " krocich ma subjekt "
				" tuto pozici:\n";
		cout << result << endl;
		result.polar_mode();
		cout << " nebo\n" << result << endl;
		cout << " Prumerna vzdalenost na jeden krok = "
				<< result.magval()/steps << endl;
		steps = 0;
		result.set(0.0, 0.0);
		cout << " Zadejte cilovou vzdalenost (q pro ukonceni): ";
	}
	cout << " Nashledanou!\n";

	return 0;
}
