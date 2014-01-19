// strgfun.cpp -- funkce s �et�zcov�m argumentem
#include <iostream>
int c_in_str(const char * str, char ch);
int main()
{
	using namespace std;
	char mmm[15] = "minimum"; 		// �et�zec v poli
// n�kter� syst�my vy�aduj�, aby bylo
// p�i inicializaci pole p�ed int vlo�eno static

	char *wail = "narikat"; 			// prom�nn� wail (sku�et) ukazuje na �et�zec

	int ms = c_in_str(mmm, 'm');
	int as = c_in_str(wail, 'a');
	cout << ms << " znaky m v retezci " << mmm << endl;
	cout << as << " znaky a v retezci " << wail << endl;
	return 0;
}

// tato funkce po��t� po�et znak� ch
// v �et�zci str
int c_in_str(const char * str, char ch)
{
	int count = 0;

	while (*str) 				// konec, kdy� je *str rovno '\0'
	{
		if (*str == ch)
			count++;
		str++; 						// p�esun ukazatele na dal�� znak
	}
	return count;
}
