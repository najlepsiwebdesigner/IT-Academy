// forstr1.cpp -- pou�it� cyklu for s �et�zcem
#include <iostream>
#include <cstring>
const int ArSize = 20;
int main()
{
	using namespace std;
	cout << "Zadejte slovo: ";
	string word;
	cin >> word;

	// zobrazuje p�smena v opa�n�m po�ad�
	for (int i = word.size() - 1; i >= 0; i--)
		cout << word[i];
	cout << "\nNashledanou.\n";
	
	return 0;
}
