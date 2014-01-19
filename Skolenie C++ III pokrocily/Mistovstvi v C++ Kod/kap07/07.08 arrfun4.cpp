// arrfun4.cpp -- funkce s rozsahem pole
#include <iostream>
const int ArSize = 8;
int sum_arr(const int * begin, const int * end);
int main()
{
	using namespace std;
	int cookies[ArSize] = {1,2,4,8,16,32,64,128};
// n�kter� syst�my vy�aduj�, aby bylo
// p�i inicializaci pole p�ed int vlo�eno static

	int sum = sum_arr(cookies, cookies + ArSize);
	cout << "Celkovy pocet snedenych zakusku: " << sum << endl;
	sum = sum_arr(cookies, cookies + 3); 						// prvn� 3 prvky
	cout << "Prvni tri jedlici snedli " << sum << " zakusku.\n";
	sum = sum_arr(cookies + 4, cookies + 8); 				// posledn� 4 prvky
	cout << "Posledni ctyri jedlici snedli " << sum << " zakusku.\n";
	return 0;
}

// vrac� sou�et prvk� celo��seln�ho pole
int sum_arr(const int * begin, const int * end)
{
	const int * pt;
	int total = 0;

	for (pt = begin; pt != end; pt++)
		total = total + *pt;
	return total;
}
