// instr2.cpp -- �ten� v�ce ne� jednoho slova pomoc� getline
#include <iostream>
int main()
	{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Zadejte vase jmeno:\n";
	cin.getline(name, ArSize); // �te cel� ��dek
	cout << "Zadejte vas oblibeny zakusek:\n";
	cin.getline(dessert, ArSize);
	cout << "Mam vyborny " << dessert;
	cout << ", ktery si zaslouzi jen " << name << ".\n";
	
	return 0;
}
