// strin.cpp -- form�tovan� �ten� ze znakov�ho pole
#include <iostream>
#include <sstream>
#include <string>
int main()
{
	using namespace std;
	string lit = "Byl tmavy a bourlivy den a "
							" jasne zaril uplnek. ";
	istringstream instr(lit); 	// pou�it� vyrovn�vac� pam�ti pro vstup
	string word;;
	while (instr >> word) 			// �ten� po slovech
		cout << word << endl;

	return 0;
}
