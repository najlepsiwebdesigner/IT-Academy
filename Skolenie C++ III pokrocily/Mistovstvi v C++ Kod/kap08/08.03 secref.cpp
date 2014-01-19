// secref.cpp -- definov�n� a pou�it� odkazu (reference)
#include <iostream>
int main()
{
	using namespace std;
	int krysy = 101;
	int & hlodavci = krysy; 	// hlodavci je odkaz (reference)

	cout << "krysy = " << krysy;
	cout << ", hlodavci = " << hlodavci << endl;

	cout << "adresa krys = " << &krysy;
	cout << ", adresa hlodavcu = " << &hlodavci << endl;

	int kralicci = 50;
	hlodavci = kralicci; 			// m��eme zm�nit odkaz?
	cout << "kralicci = " << kralicci;
	cout << ", krysy = " << krysy;
	cout << ", hlodavci = " << hlodavci << endl;

	cout << "adresa kralicku = " << &kralicci;
	cout << ", adresa hlodavcu = " << &hlodavci << endl;
	return 0;
}
