// count.cpp -- po��t�n� znak� v seznamu soubor�
#include <iostream>
#include <fstream>
#include <cstdlib> // or stdlib.h
// #include <console.h> // pro Macintosh
int main(int argc, char * argv[])
{
	using namespace std;
	// argc = ccommand(&argv); // pro Macintosh
	if (argc == 1) // pokud nejsou parametry, skon��
	{
		cerr << "Pouziti: " << argv[0] << " soubor[y]\n";
		exit(EXIT_FAILURE);
	}

	ifstream fin; // otev�e tok
	long count;
	long total = 0;
	char ch;

	for (int file = 1; file < argc; file++)
	{
		fin.open(argv[file]); // spoj� tok se souborem argv[file]
		if (!fin.is_open())
		{
			cerr << "Nejde otevrit " << argv[file] << endl;
			fin.clear();
			continue;
		}
		count = 0;
		while (fin.get(ch))
			count++;
		cout << count << " znaku v souboru " << argv[file] << endl;
		total += count;
		fin.clear(); // pot�eba pro n�kter� implementace
		fin.close(); // odpoj� soubor
	}
	cout << total << " znaku ve vsech souborech\n";

	return 0;
}
