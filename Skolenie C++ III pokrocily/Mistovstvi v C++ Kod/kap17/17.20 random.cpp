// random.cpp -- p��m� p��stup k bin�rn�mu souboru
#include <iostream> // v�t�ina syst�m� nepo�aduje
#include <fstream>
#include <iomanip>
#include <cstdlib> // nebo stdlib.h kv�li funkci exit()
const int LIM = 20;
struct planet
{
	char name[20]; // n�zev planety
	double population; // po�et obyvatel
	double g; // t�hov� zrychlen�
};

const char * file = "planets.dat"; // p�edpokl�d� existenci (p��klad binary.cpp)
inline void eatline() { while (std::cin.get() != '\n') continue; }

int main()
{
	using namespace std;
	planet pl;
	cout << fixed;

// zobrazen� po��te�n�ho obsahu
	fstream finout; // toky pro �ten� a z�pis
	finout.open(file, ios_base::in | ios_base::out | ios_base::binary);
	// Pozn�mka: V n�kter�ch syst�mech Unix je nutn� vynechat | ios::binary
	int ct = 0;
	if (finout.is_open())
	{
		finout.seekg(0); // jdi na za��tek
		cout << "Soucasny obsah souboru "
				<< file << ":\n";
		while (finout.read((char *) &pl, sizeof pl))
		{
			cout << ct++ << ": " << setw(LIM) << pl.name << ": "
					<< setprecision(0) << setw(12) << pl.population
					<< setprecision(2) << setw(6) << pl.g << endl;
		}
		if (finout.eof())
			finout.clear(); // vynuluje p��znak konce souboru eof
		else
		{
			cerr << "Chyba pri cteni souboru " << file << ".\n";
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		cerr << "Soubor " << file << " se nepodarilo otevrit -- nazdar.\n";
		exit(EXIT_FAILURE);
	}

// zm�na z�znamu
	cout << "Zadejte cislo zaznamu, ktery chcete zmenit: ";
	long rec;
	cin >> rec;
	eatline(); // zbav� se znaku nov�ho ��dku
	if (rec < 0 || rec >= ct)
	{
		cerr << "Neplatne cislo zaznamu -- nazdar\n";
		exit(EXIT_FAILURE);
	}
	streampos place = rec * sizeof pl; // konverze na typ streampos
	finout.seekg(place); // p��m� p��stup
	if (finout.fail())
	{
		cerr << "Chyba pri hledani zaznamu\n";
		exit(EXIT_FAILURE);
	}

	finout.read((char *) &pl, sizeof pl);
	cout << "Pozadovany zaznam:\n";
	cout << rec << ": " << setw(LIM) << pl.name << ": "
			<< setprecision(0) << setw(12) << pl.population
			<< setprecision(2) << setw(6) << pl.g << endl;
	if (finout.eof())
		finout.clear(); // vynuluje p��znak konce souboru eof
	cout << "Zadejte nazev planety: ";
	cin.get(pl.name, LIM);
	eatline();
	cout << "Zadejte pocet obyvatel planety: ";
	cin >> pl.population;
	cout << "Zadejte tihove zrychleni planety: ";
	cin >> pl.g;
	finout.seekp(place); // n�vrat
	finout.write((char *) &pl, sizeof pl) << flush;
	if (finout.fail())
	{
		cerr << "Chyba pri zapisu\n";
		exit(EXIT_FAILURE);
	}

// zobrazen� aktualizovan�ho souboru
	ct = 0;
	finout.seekg(0); // jdi na za��tek souboru
	cout << "Novy obsah souboru " << file << ":\n"
			<< " file:\n";
	while (finout.read((char *) &pl, sizeof pl))
	{
		cout << ct++ << ": " << setw(LIM) << pl.name << ": "
				<< setprecision(0) << setw(12) << pl.population
				<< setprecision(2) << setw(6) << pl.g << endl;
	}
	finout.close();
	cout << "Hotovo.\n";
	
	return 0;
}
