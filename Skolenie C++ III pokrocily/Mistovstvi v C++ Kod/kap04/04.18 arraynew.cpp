// arraynew.cpp -- pou�it� oper�toru new pro pole
#include <iostream>
int main()
{
	using namespace std;
	double * p3 = new double [3]; 		// m�sto na 3 double
	p3[0] = 0.2; 									// zach�z� s p3 jako se jm�nem pole
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1] je " << p3[1] << ".\n";
	p3 = p3 + 1; 									// inkrementuje ukazatel
	cout << "Nyni je p3[0] " << p3[0] << " a ";
	cout << "p3[1] " << p3[1] << ".\n";
	p3 = p3 - 1; 									// ukazuje zp�t na za��tek
	delete [] p3; 									// uvol�uje pam�
	
	return 0;
}
