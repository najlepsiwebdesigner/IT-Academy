// binary.cpp - V/V operace v bin�rn�m souboru
#include <iostream> // v�t�ina syst�m� nepo�aduje
#include <fstream>
#include <iomanip>
#include <cstdlib> // (nebo stdlib.h) kv�li funkci exit()

inline void eatline() { while (std::cin.get() != '\n') continue; }
struct planet
{
	char name[20]; // n�zev planety
	double population; // po�et obyvatel
	double g; // t�hov� zrychlen�
};

const char * file = "planets.dat";

int main()
{
	using namespace std;
	planet pl;
	cout << fixed << right;

// v�pis p�vodn�ho obsahu
	ifstream fin;
	fin.open(file, ios_base::in |ios_base::binary); // bin�rn� soubor
	// Pozn�mka: n�kter� syst�my neakceptuj� re�im ios_base::binary
	if (fin.is_open())
	{
	cout << "Soucasny obsah souboru "
			<< file << ":\n";
	while (fin.read((char *) &pl, sizeof pl))
	{
		cout << setw(20) << pl.name << ": "
				<< setprecision(0) << setw(12) << pl.population
				<< setprecision(2) << setw(6) << pl.g << endl;
	}
	fin.close();
	}

// p�id�n� nov�ch �daj�
	ofstream fout(file,
				ios_base::out | ios_base::app | ios_base::binary);
	//Pozn�mka: n�kter� syst�my neakceptuj� re�im ios::binary
	if (!fout.is_open())
	{
		cerr << "Soubor " << file << " nelze otevrit pro vystup:\n";
		exit(EXIT_FAILURE);
	}

	cout << "Zadejte nazev planety (prazdny radek pro ukonceni):\n";
	cin.get(pl.name, 20);
	while (pl.name[0] != '\0')
	{
		eatline();
		cout << "Zadejte pocet obyvatel planety: ";
		cin >> pl.population;
		cout << "Zadejte tihove zrychleni planety: ";
		cin >> pl.g;
		eatline();
		fout.write((char *) &pl, sizeof pl);
		cout << "Zadejte nazev planety (prazdny radek pro ukonceni):\n";
		cin.get(pl.name, 20);
	}
	fout.close();

// zobrazen� aktualizovan�ho souboru
	fin.clear(); // n�kter� implementace nevy�aduj�, ale neu�kod�
	fin.open(file, ios_base::in | ios_base::binary);
	if (fin.is_open())
	{
		cout << "Novy obsah souboru "
				<< file << ":\n";
		while (fin.read((char *) &pl, sizeof pl))
		{
			cout << setw(20) << pl.name << ": "
					<< setprecision(0) << setw(12) << pl.population
					<< setprecision(2) << setw(6) << pl.g << endl;
		}
		fin.close();
	}
	cout << "Hotovo.\n";

	return 0;
}
