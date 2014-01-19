// arrayone.cpp -- mal� pole cel�ch ��sel
#include <iostream>
int main()
{
	using namespace std;
	int yams[3]; 	// vytv��� pole se t�emi prvky
	yams[0] = 7; 	// p�i�azuje hodnotu prvn�mu prvku
	yams[1] = 8;
	yams[2] = 6;

	int yamcosts[3] = {20, 30, 5}; 	// vytv���, inicializuje pole
// Pozn�mka: Jestli�e v� p�eklada� nebo p�evodn�k C++ neum�
// inicializovat toto pole, pou�ijte static int yamcosts[3] nam�sto
// int yamcosts[3]

	cout << "Celkovy pocet sladkych brambor = ";
	cout << (yams[0] + yams[1] + yams[2]) << "\n";
	cout << "Balicek s " << yams[1] << " sladkymi bramborami stoji ";
	cout << yamcosts[1] << " centu za jeden sladky brambor.\n";
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total = total + yams[2] * yamcosts[2];
	cout << "Celkove vydaje za sladke brambory jsou " << total << " centu.\n";

	cout << "\nVelikost pole yams (sladke brambory) = " << sizeof yams;
	cout << " bajtu.\n";
	cout << "Velikost jednoho prvku = " << sizeof yams[0];
	cout << " bajty.\n";
	return 0;
}
