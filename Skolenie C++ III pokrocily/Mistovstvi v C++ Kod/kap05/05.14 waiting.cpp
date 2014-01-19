// waiting.cpp -- pou�it� funkce clock() ve zpo��ovac� smy�ce
#include <iostream>
#include <ctime> // popisuje funkci clock() a typ clock_t
int main()
{
	using namespace std;
	cout << "Zadejte zpozdeni v sekundach: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC; 	// p�evede na hodinov� takty
	cout << "zacatek\a\n";
	clock_t start = clock();
	while (clock() - start < delay ) 				// �ek�n� do vypr�en� �asu
	; 																	// v�imn�te si st�edn�ku
cout << "konec \a\n";

return 0;
}
