// strtype1.cpp -- using the C++ string class
#include <iostream>
#include <string> // make string class available
int main()
{
	using namespace std;
	char charr1[20]; 						// vytvo� pr�zdn� pole
	char charr2[20] = "jaguar"; 		// vytvo� a inicializuj pole
	string str1; 								// vytvo� pr�zdn� �et�zcov� objekt
	string str2 = "panter"; 			// vytvo� a inicializuj �et�zec

	cout << "Zadej kockovitou selmu: ";
	cin >> charr1;
	cout << "Zadej jinou kockovitou selmu: ";
	cin >> str1; // use cin for input
	cout << "Zde jsou kockovite selmy:\n";
	cout << charr1 << " " << charr2 << " "
			<< str1 << " " << str2 		// v�stup prost�ednictv�m cout
			<< endl;
	cout << "Treti pismeno v " << charr2 << " je "
			<< charr2[2] << endl;
	cout << "Treti pismeno v " << str2 << " je "
			<< str2[2] << endl; 			// z�pis typu pole

	return 0;
}
