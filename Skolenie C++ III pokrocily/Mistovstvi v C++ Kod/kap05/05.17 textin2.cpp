//textin2.cpp -- pou�it� funkce cin.get(char)
#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;

	cout << "Zadejte znaky; zadejte # pro ukonceni:\n";
	cin.get(ch); 				// pou�ijte funkci cin.get(ch)
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch); 			// pou�ijte ji znovu
	}
	cout << endl << count << " znaku nacteno\n";
	
	return 0;
}
