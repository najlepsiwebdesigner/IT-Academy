// cinfish.cpp -- nenumerick� vstup ukon�uje cyklus
#include <iostream>
const int Max = 5;
int main()
{
	using namespace std;
// z�sk�n� dat
	double fish[Max];
	cout << "Prosim, zadejte vahy ryb.\n";
	cout << "Muzete zadat az " << Max
			<< " ryb <q pro ukonceni>.\n";
	cout << "ryba c.1: ";
	int i = 0;
	while (i < Max && cin >> fish[i]) {
		if (++i < Max)
			cout << "ryba c." << i+1 << ": ";
	}
// v�po�et pr�m�ru
	double total = 0.0;
	for (int j = 0; j < i; j++)
		total += fish[j];
// zobrazen� v�sledk�
	if (i == 0)
		cout << "Nebyla zadana zadna ryba.\n";
	else
		cout << total / i << " = prumerna vaha "
				<< i << " ryb\n";
	cout << "Hotovo.\n";
	
return 0;
}
