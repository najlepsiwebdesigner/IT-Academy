// recur.cpp -- pou�it� rekurze
#include <iostream>
void countdown(int n);

int main()
{
	countdown(4); 					// vol� rekurzivn� funkci
	return 0;
}

void countdown(int n)
{
	using namespace std;
	cout << "Odpocitavani ... " << n << "\n";
	if (n > 0)
		countdown(n - 1); 		// funkce vol� sama sebe
cout << n << ": Kaboom!\n";
}
