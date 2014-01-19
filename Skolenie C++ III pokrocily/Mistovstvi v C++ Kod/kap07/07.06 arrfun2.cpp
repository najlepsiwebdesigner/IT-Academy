// arrfun2.cpp -- funkce s argumentem typu pole
#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);
// m�sto direktivy using pou�ijeme std::
int main()
{
	int cookies[ArSize] = {1,2,4,8,16,32,64,128};
// n�kter� syst�my vy�aduj�, aby bylo
// p�i inicializaci pole p�ed int vlo�eno static

	std::cout << cookies << " = adresa pole, ";
// n�kter� syst�my vy�aduj� p�etypov�n�: unsigned (cookies)

	std::cout << sizeof cookies << " = velikost cookies\n";
	int sum = sum_arr(cookies, ArSize);
	std::cout << "Celkovy pocet snedenych zakusku: " << sum << std::endl;
	sum = sum_arr(cookies, 3); 						// le�
	std::cout << "Prvni tri jedlici snedli " << sum << " zakusku.\n";
	sum = sum_arr(cookies + 4, 4); 				// dal�� le�
	std::cout << "Posledni ctyri jedlici snedli " << sum << " zakusku.\n";
	return 0;
}

// vrac� sou�et prvk� celo��seln�ho pole
int sum_arr(int arr[], int n)
{
	int total = 0;
	std::cout << arr << " = arr, ";
// n�kter� syst�my vy�aduj� p�etypov�n�: unsigned (arr)

	std::cout << sizeof arr << " = velikost arr\n";
	for (int i = 0; i < n; i++)
		total = total + arr[i];
	return total;
}
