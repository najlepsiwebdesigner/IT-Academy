// placenew2.cpp -- new, new s um�st�n�m, bez delete
#include <iostream>
#include <string>
#include <new>
using namespace std;
const int BUF = 512;

class JustTesting
{
private:
	string words;
	int number;
public:
	JustTesting(const string & s = "Test", int n = 0)
	{words = s; number = n; cout << words << " zkonstruovan\n"; }
	~JustTesting() { cout << words << " zrusen\n";}
	void Show() const { cout << words << ", " << number << endl;}
};
int main()
{
	char * buffer = new char[BUF]; // z�skej blok pam�ti

	JustTesting *pc1, *pc2;

	pc1 = new (buffer) JustTesting; // um�sti objekt do buferu
	pc2 = new JustTesting("Halda1", 20); // um�sti objekt na haldu

	cout << "Adresy bloku v pameti:\n" << "bufer: "
			<< (void *) buffer << " halda: " << pc2 <<endl;
	cout << "Obsah pameti:\n";
	cout << pc1 << ": ";
	pc1->Show();
	cout << pc2 << ": ";
	pc2->Show();

	JustTesting *pc3, *pc4;
// fix placement new location
	pc3 = new (buffer + sizeof (JustTesting))
			JustTesting("Lepsi napad", 6);
	pc4 = new JustTesting("Halda2", 10);

	cout << "Obsah pameti:\n";
	cout << pc3 << ": ";
	pc3->Show();
	cout << pc4 << ": ";
	pc4->Show();

	delete pc2; // vra� haldu1
	delete pc4; // vra� haldu2
// explicitn� ru�en� objekt� vytvo�en�ch p��kazem new s um�st�n�m
	pc3->~JustTesting(); // zru� objekt, na n�j� ukazuje pc3
	pc1->~JustTesting(); // zru� objekt, na n�j� ukazuje pc1
	delete [] buffer; // vra� bufer
	cout << "Hotovo\n";
	return 0;
}
