// ifelse.cpp -- pou�it� p��kazu if else
#include <iostream>
int main()
{
	using namespace std;
	char ch;

	cout << "Piste a ja budu opakovat.\n";
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			cout << ch; 		// prov�d� se, kdy� ch je znak nov�ho ��dku
		else
			cout << ch+1; 		// prov�d� se jindy
		cin.get(ch);
	}
// zkuste ch + 1 m�sto ++ch kv�li zaj�mav�mu d�sledku
	cout << "\nProsim, omluvte male nedorozumeni.\n";
	
	return 0;
}
