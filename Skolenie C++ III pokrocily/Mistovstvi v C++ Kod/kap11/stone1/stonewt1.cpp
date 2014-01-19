// stonewt1.cpp -- metody t��dy Stonewt + konverzn� funkce
#include <iostream>
using std::cout;
#include "stonewt1.h"

// vytvo�en� objektu Stonewt z hodnoty typu double
Stonewt::Stonewt(double lbs)
{
	stone = int (lbs) / Lbs_per_stn; // celo��seln� d�len�
	pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

// vytvo�en� objektu Stonewt z hodnot stone, hodnoty double
Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn +lbs;
}

Stonewt::Stonewt() // implicitn� konstruktor, wt = 0
{
	stone = pounds = pds_left = 0;
}
Stonewt::~Stonewt() // destruktor
{
}

// zobraz� v�hu v kamenech
void Stonewt::show_stn() const
{
	cout << stone << " kamenu, " << pds_left << "liber\n";
}

// zobraz� v�hu v libr�ch
void Stonewt::show_lbs() const
{
	cout << pounds << "liber\n";
}

// konverzn� funkce
Stonewt::operator int() const
{
	return int (pounds + 0.5);
}

Stonewt::operator double()const
{
	return pounds;
}
