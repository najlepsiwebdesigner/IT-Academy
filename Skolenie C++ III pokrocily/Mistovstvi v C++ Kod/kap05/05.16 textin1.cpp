// textin1.cpp -- �ten� znak� cyklem while
#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0; 					// pou�ije z�kladn� vstup
	cout << " Zadejte znaky; zadejte # pro ukonceni:\n";
	cin >> ch; 							// z�sk� znak
	while (ch != '#') 				// test znaku
	{
		cout << ch; 					// zobrazen� znaku
		++count; 							// p�i�ten� znaku
		cin >> ch; 						// z�sk� dal�� znak
	}
	cout << endl << count << " znaku nacteno\n";
	
	return 0;
}
