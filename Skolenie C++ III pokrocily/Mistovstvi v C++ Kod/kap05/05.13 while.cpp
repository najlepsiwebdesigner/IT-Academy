// while.cpp - �vod do cyklu while
#include <iostream>
const int ArSize = 20;
int main()
{
	using namespace std;
	char name[ArSize];

	cout << "Vase krestni jmeno, prosim: ";
	cin >> name;
	cout << "Zde je vase jmeno svisle s ASCII kody:\n";
	int i = 0; 							// start na za��tku �et�zce
	while (name[i] != '\0') 	// zpracov�n� do konce �et�zce
	{
		cout << name[i] << ": " << int(name[i]) << endl;
		i++; 								// na tento krok nezapome�te
	}
	
	return 0;
}
