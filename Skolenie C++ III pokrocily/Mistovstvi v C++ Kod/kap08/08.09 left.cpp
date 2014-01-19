// left.cpp -- �et�zcov� funkce s implicitn�m argumentem
#include <iostream>
const int ArSize = 80;
char * left(const char * str, int n = 1);
int main()
{
	using namespace std;
	char sample[ArSize];
	cout << "Zadejte retezec:\n";
	cin.get(sample, ArSize);
	char *ps = left(sample, 4);
	cout << ps << "\n";
	delete [] ps; 			// uvoln�n� star�ho �et�zce
	ps = left(sample);
	cout << ps << endl;
	delete [] ps; 			// uvoln�n� nov�ho �et�zce
	return 0;
}

// Tato funkce vrac� ukazatel na nov� �et�zec, kter�
// obsahuje prvn�ch n znak� �et�zce str.
char * left(const char * str, int n)
{
	if(n < 0)
		n = 0;
	char * p = new char[n+1];
	int i;
	for (i = 0; i < n && str[i]; i++)
		p[i] = str[i]; // kop�rov�n� znak�
	while (i <= n)
		p[i++] = '\0'; // zbytek se nastav� na '\0'
	return p;
}
