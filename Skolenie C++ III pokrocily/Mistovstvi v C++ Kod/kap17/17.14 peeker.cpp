// peeker.cpp -- n�kter� metody z istream
#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

//	�te a zobrazuje vstup a� do znaku #
	char ch;

	while(cin.get(ch)) // skon�� p�i EOF
	{
		if (ch != '#')
			cout << ch;
		else
		{
			cin.putback(ch); // vlo�� znak zp�t
			break;
		}
	}
	if (!cin.eof())
	{
		cin.get(ch);
		cout << endl << "Dalsim vstupnim znakem je " << ch << ".\n";
	}
	else
	{
		cout << "Konec souboru.\n";
		std::exit(0);
	}

	while(cin.peek() != '#') // p�edem kontroluje vstupn� znaky
	{
		cin.get(ch);
		cout << ch;
	}
	if (!cin.eof())
	{
		cin.get(ch);
		cout << endl << "Dalsim vstupnim znakem je " << ch << ".\n";
	}
		else
	cout << "Konec souboru.\n";

	return 0;
}
