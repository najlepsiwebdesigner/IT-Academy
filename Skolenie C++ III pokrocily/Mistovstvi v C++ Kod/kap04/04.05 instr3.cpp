// instr3.cpp -- �ten� v�ce ne� jednoho slova pomoc� get() & get()
#include <iostream>
int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Zadejte vase jmeno:\n";
	cin.get(name, ArSize).get(); 		// �te �et�zec, nov� ��dek
	cout << "Zadejte vas oblibeny zakusek:\n";
	cin.get(dessert, ArSize).get();
	cout << "Mam vyborny " << dessert;
	cout << ", ktery si zaslouzi jen " << name << ".\n";
	return 0;
}
