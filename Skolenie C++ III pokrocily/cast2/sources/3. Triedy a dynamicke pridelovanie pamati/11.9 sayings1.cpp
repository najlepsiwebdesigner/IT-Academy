// sayings1.cpp -- pou�it� roz���en� t��dy String
// compile with string1.cpp
#include <iostream>
#include "string1.h"
const int ArSize = 10;
const int MaxLen =81;
int main()
{
using std::cout;
using std::cin;
using std::endl;
String name;
cout <<" Dobry den, jak se jmenujete?\n>> ";
cin >> name;
cout << name << ",zadejte prosim az " << ArSize
<< " kratkych rceni < prazdny radek pro ukonceni>:\n";
String sayings[ArSize]; // pole objekt�
char temp[MaxLen]; // pam� pro do�asn� �et�zec
int i;
for (i = 0; i < ArSize; i++)
{
cout << i+1 << ": ";
cin.get(temp, MaxLen);
while (cin && cin.get() != '\n')
continue;
if (!cin || temp[0] == '\0') // pr�zdn� ��dek?
break; // k i se nep�i�te jedni�ka
else
sayings[i] = temp; // p�et�en� p�i�azen�
}
int total = i; // celkov� po�et p�e�ten�ch ��dk�
cout << "Zadali jste tato rceni:\n";
for (i = 0; i < total; i++)
cout << sayings[i][0] << ": " << sayings[i] << endl;
int shortest = 0;
int first = 0;
for (i = 1; i < total; i++)
{
if (sayings[i].length() < sayings[shortest].length())
shortest = i;
if (sayings[i] < sayings[first])
first = i;
}
cout << "Nejkratsi rceni:\n" << sayings[shortest] << endl;;
cout << "Prvni v abecede:\n" << sayings[first] << endl;
cout << "Tento program pouzil "<< String::HowMany()
<< " objektu String. Nashledanou.\n";
return 0;
}
