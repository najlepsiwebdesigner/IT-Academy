// append.cpp -- p�id�n� informac� do souboru
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // (nebo stdlib.h) kv�li funkci exit()

const char * file = "guests.txt";
int main()
{
	using namespace std;
	char ch;

// vyp�e po��te�n� obsah
	ifstream fin;
	fin.open(file);

	if (fin.is_open())
	{
		cout << "Tady je aktualni obsah souboru "
				<< file << ":\n";
		while (fin.get(ch))
				cout << ch;
		fin.close();
	}

// p�idej nov� jm�na
	ofstream fout(file, ios::out | ios::app);
	if (!fout.is_open())
	{
		cerr << "Soubor " << file << " nelze otevrit pro vystup.\n";
		exit(EXIT_FAILURE);
	}

	cout << "Zadavejte jmena hostu (prazdny radek pro ukonceni):\n";
	string name;
	while (getline(cin,name) && name.size() > 0)
	{
		fout << name << endl;
	}
	fout.close();

// zobrazen� aktualizovan�ho souboru
	fin.clear(); // pro n�kter� p�eklada�e nen� nutn�
	fin.open(file);
	if (fin.is_open())
	{
		cout << "Tady je aktualizovany obsah souboru "
				<< file << ":\n";
		while (fin.get(ch))
		cout << ch;
		fin.close();
	}
	cout << "Hotovo.\n";
	return 0;
}
