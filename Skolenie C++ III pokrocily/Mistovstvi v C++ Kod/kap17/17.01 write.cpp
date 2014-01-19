// write.cpp -- pou�it� metody cout.write()
#include <iostream>
#include <cstring> // nebo string.h

int main()
{
	using std::cout;
	using std::endl;
	const char * state1 = "Ohio";
	const char * state2 = "Utah";
	const char * state3 = "Euphoria";
	int len = std::strlen(state2);
	cout << "Zvysuji index cyklu:\n";
	int i;
	for (i = 1; i <= len; i++)
	{
		cout.write(state2,i);
		cout << endl;
	}

// spojen� v�stupu
	cout << "Snizuji index cyklu:\n";
	for (i = len; i > 0; i--)
		cout.write(state2,i) << endl;

// p�ekro�en� d�lky �et�zce
	cout << "Prekracuji delku retezce:\n";
	cout.write(state2, len + 5) << endl;

	return 0;
}
