// copy.cpp -- funkce copy() a iter�tory
#include <iostream>
#include <iterator>
#include <vector>
int main()
{
	using namespace std;

	int casts[10] = {6, 7, 2, 9, 4, 11, 8, 7, 10, 5};
	vector<int> dice(10);
	// kop�rov�n� z pole do vektoru
	copy(casts, casts + 10, dice.begin());
	cout << "Hodte kostky!\n";
	// vytvo�� iter�tor ostream
	ostream_iterator<int, char> out_iter(cout, " ");
	// kop�rov�n� z vektoru na v�stup
	copy(dice.begin(), dice.end(), out_iter);
	cout << endl;
	cout <<"Implicitni pouziti inverzniho iteratoru.\n";
	copy(dice.rbegin(), dice.rend(), out_iter);
	cout << endl;
	cout <<"Explicitni pouziti inverzniho iteratoru.\n";
	vector<int>::reverse_iterator ri;
	for (ri = dice.rbegin(); ri != dice.rend(); ++ri)
	cout << *ri << ' ';
	cout << endl;

	return 0;
}
