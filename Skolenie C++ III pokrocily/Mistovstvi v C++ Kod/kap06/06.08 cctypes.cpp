// cctypes.cpp -- pou�it� knihovny ctype.h
#include <iostream>
#include <cctype> // prototypy znakov�ch funkc�
int main()
{
	using namespace std;
	cout << "Zadejte text pro analyzu a znakem @"
				" ukoncete vstup.\n";
	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;

	cin.get(ch); 									// z�sk� prvn� znak
	while(ch != '@') 							// test ukon�en� vstupu
	{
		if(isalpha(ch)) 							// je to alfabetick� znak?
			chars++;
		else if(isspace(ch)) 					// je to b�l� znak?
			whitespace++;
		else if(isdigit(ch)) 					// je to ��slice?
			digits++;
		else if(ispunct(ch)) 					// je to znak interpunkce?
			punct++;
		else
			others++;
		cin.get(ch); // z�sk� dal�� znak
	}
	cout << chars << " pismen, "
			<< whitespace << " bilych znaku, "
			<< digits << " cislic, "
			<< punct << " interpunkcnich znaku, "
			<< others << " ostatnich.\n";
			
				cin.get(ch); 									// z�sk� prvn� znak
					while(ch != '@') 							// test ukon�en� vstupu
                    {
                    cin.get(ch); // z�sk� dal�� znak
                    }       
	return 0;
}
