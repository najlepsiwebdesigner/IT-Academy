// manip.cpp -- form�tov�n� pomoc� manipul�tor�
#include <iostream>
int main()
{
	using namespace std;
	cout << "Zadejte cele cislo: ";
	int n;
	cin >> n;

	cout << "n n*n\n";
	cout << n << " " << n * n << " (desitkove)\n";

// nastaven� �estn�ctkov�ho re�imu
	cout << hex;
	cout << n << " ";
	cout << n * n << " (sestnactkove)\n";

// nastaven� osmi�kov�ho re�imu
	cout << oct << n << " " << n * n << " (osmickove)\n";

// alternativn� zp�sob vol�n� manipul�toru
	dec(cout);
	cout << n << " " << n * n << " (desitkove)\n";

	return 0;
}
