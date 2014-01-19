// str1.cpp -- �vod do t��dy string
#include <iostream>
#include <string>
// pou�it� konstruktor� t��dy string

int main()
{
	using namespace std;
	string one("Bolek zvitezil v loterii!"); 	// 1.konstruktor (ctor �.1)
	cout << one << endl; 										// p�et�en� oper�tor <<
	string two(20,'$'); 										// 2.konstruktor (ctor �.2)
	cout << two << endl;
	string three(one); 										// 3.konstruktor (ctor �.3)
	cout << three << endl;
	one += " Moment!" ; 										// p�et�en� oper�tor +=
	cout << one << endl;
	two = "Prominte! Melo to byt ";
	three[0] = 'L';
	string four; 													// 4.konstruktor (ctor �.4)
	four = two + three; 										// p�et�en� oper�tor =
	cout << four << endl;
	char alls[] = "Konec dobry, vsechno dobre";
	string five(alls,20); 									// 5.konstruktor (ctor �.5)
	cout << five <<"!\n";
	string six(alls+6, alls + 11); 					// 6.konstruktor (ctor �.6)
	cout << six << ", ";
	string seven(&five[6], &five[11]); 				// op�t 6.konstruktor
	cout << seven << "...\n";
	
	return 0;
}
