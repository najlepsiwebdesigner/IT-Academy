// textin3.cpp -- �ten� znak� do konce souboru
#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cin.get(ch); 								// pokus p�e��st znak
	while (cin.eof() == false) 		// test na EOF
	{
		cout << ch; 							// echo znaku na displeji
		++count;
		cin.get(ch); 							// pokus o �ten� dal��ho znaku
	}
	cout << endl << count << " znaku nacteno\n";
	
	return 0;
}
