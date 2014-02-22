// static.cpp -- pou�it� statick� lok�ln� prom�nn�
#include <iostream>
// konstanty
const int ArSize = 10;

// prototyp funkce
void strcount(const char * str);

int main()
{
	using namespace std;
	char input[ArSize];
	char next;

	cout << "Zadejte radek textu:\n";
	cin.get(input, ArSize);
	while (cin)
	{
		cin.get(next);
		while (next != '\n') // �et�zec se neve�el!
			cin.get(next);
		strcount(input);
		cout << "Zadejte dalsi radek textu (prazdny radek na ukonceni):\n";
		cin.get(input, ArSize);
	}
	cout << "Sbohem\n";
	return 0;
}

void strcount(const char * str)
{
	using namespace std;
	static int total = 0; // statick� lok�ln� prom�nn�
	int count = 0; // automatick� lok�ln� prom�nn�

	cout << "\"" << str <<"\" obsahuje ";
	while (*str++) // jde na konec �et�zce
		count++;
	total += count;
	cout << count << " znaku\n";
	cout << total << " znaku celkem\n";
}
