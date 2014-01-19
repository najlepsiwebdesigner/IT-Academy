// stock1.cpp -- Implementace t��dy Stock s p�id. konstruktorem a destruktorem 
#include <iostream>
#include "stock1.h"

// konstruktory (upov�dan� verze)
Stock::Stock() // implicitn� konstruktor
{
	std::cout << "Volani implicitniho konstruktoru\n";
	std::strcpy(company, "bezejmenna");
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const char * co, int n, double pr)
{
	std::cout << "Volani konstruktoru s pouzitim " << co << ".\n";
	std::strncpy(company, co, 29);
	company[29] = '\0';

	if (n < 0)
	{
		std::cerr << "Pocet akcii nemuze byt zaporny; "
						<< company << " nastaveni shares na 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}
// destruktor t��dy
Stock::~Stock() // hovorn� destruktor t��dy
{
std::cout << "Nashledanou, " << company << "!\n";
}

// ostatn� metody
void Stock::buy(int num, double price)
{
	if (num < 0)
	{
		std::cerr << "Pocet nakupovanych akcii nemuze byt zaporny. "
						<< "Transakce ukoncena.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(int num, double price)
{
	using std::cerr;
	if (num < 0)
	{
		cerr << "Pocet prodavanych akcii nemuze byt zaporny. "
				<< "Transakce ukoncena.\n";
	}
	else if (num > shares)
	{
		cerr << "Nemuzete prodat vic akcii nez mate! "
				<< "Transakce ukoncena.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
	using std::cout;
	using std::endl;
	cout << "Spolecnost: " << company
			<< "  Akcie: " << shares << endl
			<< "  Cena akcie: $" << share_val
			<< "  Celkova hodnota: $" << total_val << endl;
}
