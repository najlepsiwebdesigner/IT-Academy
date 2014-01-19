// leftover.cpp -- p�et�en� funkce left()
#include <iostream>
unsigned long left(unsigned long num, unsigned ct);
char * left(const char * str, int n = 1);
int main()
{
	using namespace std;
	char * trip = "Havaj!!!"; 			// testovac� hodnota
	unsigned long n = 12345678; 			// testovac� hodnota
	int i;
	char * temp;

	for (i = 1; i < 10; i++)
	{
		cout << left(n, i) << endl;
		temp = left(trip, i);
		cout << temp << endl;
		delete [] temp; 							// ukazuje na do�asnou pam�
	}
	return 0;

}

// Tato funkce vrac� ct prvn�ch ��slic z ��sla num.
unsigned long left(unsigned long num, unsigned ct)
{
	unsigned digits = 1;
	unsigned long n = num;
	if (ct == 0 || num == 0)
		return 0; 									// vrac� 0, kdy� nejsou ��slice
	while (n /= 10)
		digits++;
	if (digits > ct)
	{
	ct = digits - ct;
	while (ct--)
		num /= 10;
	return num; 									// vrac� ct ��slic zleva
	}
	else // jestli�e ct >= po�et ��slic
		return num; 								// vrac� cel� ��slo
}

// Tato funkce vrac� ukazatel na �et�zec, kter� obsahuje
// prvn�ch n znak� v �et�zci str.
char * left(const char * str, int n)
{
	if (n < 0)
		n = 0;
	char * p = new char[n+1];
	int i;
	for (i = 0; i < n && str[i]; i++)
		p[i] = str[i]; 							// kop�rov�n� znak�
	while (i <= n)
		p[i++] = '\0'; 							// nastav� zbytek �et�zce na '\0'
	return p;
}
