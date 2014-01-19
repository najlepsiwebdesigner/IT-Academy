// sumafile.cpp -- funkce s argumentem typu pole
#include <iostream>
#include <fstream> 				// podpora souborov�ch V/V operac�
#include <cstdlib> 				// podpora objektu exit()
const int SIZE = 60;
int main()
{
	using namespace std;
	char filename[SIZE];
	ifstream inFile; 				// objekt pro zpracov�n� vstupu ze souboru

	cout << "Zadejte jmeno datoveho souboru: ";
	cin.getline(filename, SIZE);
	inFile.open(filename); 		// p�i�azen� inFile k souboru
	if (!inFile.is_open()) 		// nepoda�ilo se otev��t
	{
		cout << "Nepodarilo se otevrit soubor " << filename << endl;
		cout << "Program se ukonci.\n";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0; 					// po�et p�e�ten�ch polo�ek

	inFile >> value; 				// �ti prvn� hodnotu
	while (inFile.good()) 		// dokud je vstup v po��dku a nen� EOF
	{
		++count; 							// �ti dal�� polo�ku
		sum += value; 					// vypo�ti celkov� sou�et
		inFile >> value; 			// �ti dal�� hodnotu
	}
	if (inFile.eof())
		cout << "Konec souboru.\n";
	else if (inFile.fail())
		cout << "Cteni se ukoncilo, nespravna data.\n";
	else
		cout << "Cteni se ukoncilo z neznameho duvodu.\n";
	if (count == 0)
		cout << "Nezpracovala se zadna data.\n";
	else
	{
		cout << "Pocet prectenych polozek: " << count << endl;
		cout << "Soucet: " << sum << endl;
		cout << "Prumer: " << sum / count << endl;
	}
	inFile.close(); 			// zavri soubor
	
	return 0;
}
