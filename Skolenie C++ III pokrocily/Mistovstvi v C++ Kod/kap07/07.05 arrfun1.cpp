// arrfun1.cpp -- funkce s parametrem typu pole
#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n); 			// prototyp
int main()
{
	using namespace std;
	int cookies[ArSize] = {1,2,4,8,16,32,64,128};
// n�kter� syst�my vy�aduj�, aby bylo
// p�i inicializaci pole p�ed int vlo�eno static

	int sum = sum_arr(cookies, ArSize);
	cout << "Celkovy pocet snedenych zakusku: " << sum << "\n";
	return 0;
}

// vrac� sou�et prvk� celo��seln�ho pole
int sum_arr(int arr[], int n)
{
	int total = 0;

	for (int i = 0; i < n; i++)
		total = total + arr[i];
	return total;
}
