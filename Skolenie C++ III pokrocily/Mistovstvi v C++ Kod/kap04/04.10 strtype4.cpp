// strtype4.cpp -- radkovy vstup
#include <iostream>
#include <string> 					// zp��stupn�n� t��dy string
#include <cstring> 				// knihovna �et�zc� v C
int main()
{
	using namespace std;
	char charr[20];
	string str;

	cout << "Delka retezce v charr pred vstupem: "
			<< strlen(charr) << endl;
	cout << "Delka retezce v str pred vstupem: "
			<< str.size() << endl;
	cout << "Zadejte textovy radek:\n";
	cin.getline(charr, 20); 		// indikace maxim�ln� d�lky
	cout << "Zadali jste: " << charr << endl;
	cout << "Zadejte dalsi radek:\n";
	getline(cin, str); 				// cin je nyn� argumentem; d�lka nen� uvedena
	cout << "Zadali jste: " << str << endl;
	cout << "Delka retezce v charr po vstupu je: "
			<< strlen(charr) << endl;
	cout << "Delka retezce v str po vstupu je: "
			<< str.size() << endl;

	return 0;
}
