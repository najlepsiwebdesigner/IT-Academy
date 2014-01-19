// iomanip.cpp - pou�it� manipul�tor� z hlavi�kov�ho souboru iomanip
// n�kter� syst�my vy�aduj� explicitn� vazbu na matematickou knihovnu
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	using namespace std;
	// pou�it� nov�ch standardn�ch manipul�tor�
	cout << showpoint << fixed << right;

	// pou�it� manipul�tor� z iomanip
	cout << setw(6) << "N" << setw(14) << " druha odmocnina"
			<< setw(15) << " ctvrta odmocnina\n";

	double root;
	for (int n = 10; n <=100; n += 10)
	{
		root = sqrt(double(n));
		cout << setw(6) << setfill('.') << n << setfill(' ')
				<< setw(12) << setprecision(3) << root
				<< setw(14) << setprecision(4) << sqrt(root)
				<< endl;
	}
	return 0;
}
