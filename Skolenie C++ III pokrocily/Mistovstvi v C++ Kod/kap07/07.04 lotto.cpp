// lotto.cpp - pravd�podobnost v�hry
#include <iostream>
// Pozn�mka: n�kter� implementace vy�aduj� double m�sto long double
long double probability(unsigned numbers, unsigned picks);
int main()
{
	using namespace std;
	double total, choices;
	cout << 	"Zadejte celkovy pocet cisel na sazence\n"
					"a pocet moznych voleb:\n";
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "Mate pravdepodobnost jedna ku ";
		cout << probability(total, choices); 			// v�po�et pravd�podobnosti
		cout << ", ze vyhrajete.\n";
		cout << "Dalsi dve cisla (q pro ukonceni): ";
	}
	cout << "Sbohem\n";
	return 0;
}
// n�sleduj�c� funkce po��t� pravd�podobnost v�b�ru
// spr�vn�ch ��sel z celkov�ho po�tu mo�nost�
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0; // zde je n�kolik lok�ln�ch prom�nn�ch
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p ;
	return result;
}
