// firstref.cpp -- definov�n� a pou�it� odkazu (reference)
#include <iostream>
int main()
{
	using namespace std;
	int krysy = 101;
	int & hlodavci = krysy; 	// hlodavci je odkaz (reference)

	cout << "krysy = " << krysy;
	cout << ", hlodavci = " << hlodavci << endl;
	hlodavci++;
	cout << "krysy = " << krysy;
	cout << ", hlodavci = " << hlodavci << endl;

// n�kter� implementace vy�aduj� p�etypov�n� n�sleduj�c�ch
// adres na typ unsigned
	cout << "adresa krys = " << &krysy;
	cout << ", adresa hlodavcu = " << &hlodavci << endl;
	return 0;
}
