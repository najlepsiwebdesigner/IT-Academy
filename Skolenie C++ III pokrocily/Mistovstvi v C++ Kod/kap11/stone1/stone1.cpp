// stone1.cpp -- u�ivatelem definovan� konverzn� funkce
// p�elo�it se souborem stonewt1.cpp
#include <iostream>
#include "stonewt1.h"

int main()
{
	using std::cout;
	Stonewt poppins(9, 2.8); // 9 kamen�, 2.8 liber
	double p_wt = poppins; // implicitn� konverze
	cout << "Konverze na typ double => ";
	cout << "Poppins: " << p_wt << " liber.\n";
	cout << "Konverze na typ int => ";
	cout << "Poppins: " << int (poppins) << " liber.\n";
	return 0;
}
