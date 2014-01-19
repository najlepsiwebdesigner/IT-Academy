// fileio.cpp -- ulo�en� do souboru
#include <iostream> // pouze v n�kter�ch syst�mech
#include <fstream>
#include <string>

int main()
{
	using namespace std;
	string filename;

	cout << "Zadejte nazev noveho souboru: ";
	cin >> filename;

// vytvo�en� objektu v�stupn�ho toku pro nov� soubor s n�zvem fout
	ofstream fout(filename.c_str());

	fout << "Prisne tajne!\n"; 	// zapisuje do souboru
	cout << "Zadejte vase tajne cislo: "; // zapisuje na obrazovku
	float secret;
	cin >> secret;
	fout << " Vase tajne cislo je " << secret << endl;
	fout.close(); 							// uzav�e soubor

// vytvo�en� objektu vstupn�ho toku pro nov� soubor s n�zvem fin
	ifstream fin(filename.c_str());
	cout << "Zde je obsah souboru " << filename << ":\n";
	char ch;
	while (fin.get(ch)) 				// �te znak ze souboru
		cout << ch; 						// a zapisuje ho na obrazovku
	cout << "Konec\n";
	fin.close();

	return 0;
}
