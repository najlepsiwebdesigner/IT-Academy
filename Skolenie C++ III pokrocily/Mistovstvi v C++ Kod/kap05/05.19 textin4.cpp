// textin4.cpp -- �ten� znak� pomoc� cin.get()
#include <iostream>
int main(void)
{
	using namespace std;
	int ch; 											// m�lo by b�t int, ne char
	int count = 0;

	while ((ch = cin.get()) != EOF) 	// test na konec souboru
	{
		cout.put(char(ch));
		++count;
	}
	cout << endl << count << " znaku nacteno\n";
	
	return 0;
}
