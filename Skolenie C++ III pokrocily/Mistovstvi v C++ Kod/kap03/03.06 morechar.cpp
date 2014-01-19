// morechar.cpp - typy char versus int
#include <iostream>
int main()
{
	using namespace std;
	char ch = 'M'; 			// p�i�a� ASCII k�d M do ch
	int i = ch; 				// p�i�a� tent�� k�d do int
	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "Ke kodu znaku prictu jednicku:" << endl;
	ch = ch + 1; 				// zm�� k�d znaku v c
	i = ch; 						// nov� znak ulo� do i
	cout << "ASCII kod znaku " << ch << " je " << i << endl;

	// pouziti clenske funkce cout.put() k vypisu znaku
	cout << "Znak ch vypisuji pomoci cout.put(ch): ";
	cout.put(ch);

	// pouziti cout.put() k vypisu znakove konstanty
	cout.put('!');
	cout << endl << "Hotovo" << endl;
	return 0;
}
