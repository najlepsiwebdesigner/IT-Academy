// worker0.cpp -- metody pracovn�ch t��d
#include "worker0.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
// Worker methods

// mus� implementovat virtu�ln� destruktor, i kdy� je �ist�
Worker::~Worker() {}

void Worker::Set()
{
	cout << "Zadejte jmeno pracovnika: ";
	getline(cin, fullname);
	cout << "Zadejte ID pracovnika: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}

void Worker::Show() const
{
	cout << "Jmeno: " << fullname << "\n";
	cout << "Zamestnanecke ID: " << id << "\n";
}

// Metody Waiter
void Waiter::Set()
{
	Worker::Set();
	cout << "Zadejte hodnoceni hbitosti cisnika: ";
	cin >> panache;
	while (cin.get() != '\n')
	continue;
}

void Waiter::Show() const
{
	cout << "Kategorie: cisnik\n";
	Worker::Show();
	cout << "Hodnoceni hbitosti: " << panache << "\n";
}

// Metody Singer

char * Singer::pv[] = {"ostatni", "alt", "kontraalt",
			"sopran", "bas", "baryton", "tenor"};

void Singer::Set()
{
	Worker::Set();
	cout << "Zadejte cislo pevcova hlasoveho rozsahu:\n";
	int i;
	for (i = 0; i < Vtypes; i++)
	{
		cout << i << ": " << pv[i] << " ";
		if ( i % 4 == 3)
			cout << endl;
	}
	if (i % 4 != 0)
		cout << endl;
	cin >> voice;
	while (cin.get() != '\n')
		continue;
}

void Singer::Show() const
{
	cout << "Kategorie: pevec\n";
	Worker::Show();
	cout << "Hlasovy rozsah: " << pv[voice] << endl;
}
