// getinfo.cpp -- vstup a vystup
#include <iostream>

int main()
{
	using namespace std;

	int carrots;

	cout << "Kolik mas mrkvi?" << endl;
	cin >> carrots; 							// Vstup v C++
	cout << "Tady ti dve pridam. ";
	carrots = carrots + 2;
// v n�sleduj�c�m ��dku je v�stup z�et�zen
	cout << "Ted mas " << carrots << " mrkvi." << endl;
	
	return 0;
}
