// if.cpp -- pou�it� p��kazu if
#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.') 		// ukon�en� na konci v�ty
	{
		if (ch == ' ') 		// test, zda je ch mezera
			++spaces;
		++total; 					// prov�d� se poka�d�
		cin.get(ch);
	}
	cout << spaces << " mezer, " << total;
	cout << " znaku celkem ve vete\n";
	
	return 0;
}
