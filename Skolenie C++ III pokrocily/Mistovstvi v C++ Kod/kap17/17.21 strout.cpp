// strout.cpp -- form�tov�n� incore do v�stupn�ho toku
#include <iostream>
#include <sstream>
#include <string>
int main()
{
	using namespace std;
	ostringstream outstr; // spravuje �et�zcov� tok

	string hdisk;
	cout << "Jak se jmenuje vas pevny disk? ";
	getline(cin, hdisk);
	int cap;
	cout << "Jaka je jeho kapacita v GB? ";
	cin >> cap;
	// z�pis form�tovan�ch informac� do �et�zcov�ho toku
	outstr << "Pevny disk " << hdisk << " ma kapacitu "
				<< cap << " gigabajtu.\n";
	string result = outstr.str(); // ulo�� v�sledek
	cout << result; // vyp�e obsah

	return 0;
}
