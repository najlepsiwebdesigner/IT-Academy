// hexoct1.cpp - p��klady hexadecim�ln�ch a oktalov�ch konstant
#include <iostream>
int main()
{
using namespace std;
int chest = 76; 				// dekadick� celo��seln� konstanta
int waist = 0x76; 			// hexadecim�ln� celo��seln� konstanta
int inseam = 076; 			// oktalov� celo��seln� konstanta
cout << "Pan ma pozoruhodnou postavu!\n";
cout << "hrudnik = " << chest << "\n";
cout << "pas = " << waist << "\n";
cout << "sed = " << inseam << "\n";

return 0;
}
