// more_and.cpp -- pou�it� logick�ho oper�toru A (AND)
#include <iostream>
const char * qualify[4] = 						// pole ukazatel�
{ 																	// na �et�zce
	"beh na 10.000 metru.\n",
	"pretahovani v blate.\n",
	"mistrovske zavody v kanoich.\n",
	"slavnosti vrhani kolacu.\n"
};
int main()
{
	using namespace std;
	int age;
	cout << "Zadejte vas vek v letech: ";
	cin >> age;
	int index;

	if (age > 17 && age < 35)
		index = 0;
	else if (age >= 35 && age < 50)
		index = 1;
	else if (age >= 50 && age < 65)
		index = 2;
	else
		index = 3;

	cout << "Kvalifikoval jste se na " << qualify[index];
	
	return 0;
}
