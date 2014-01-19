// bank.cpp -- pou�it� rozhran� t��dy Queue
// �ekl�dat s queue.cpp
#include <iostream>
#include <cstdlib> // pro rand() a srand()
#include <ctime> // pro time()
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x); // p�i�el nov� z�kazn�k?

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
// setting things up
	std::srand(std::time(0)); // n�hodn� inicializace funkce rand()

	cout << "Pripadova studie: Bankomat Bank of Heather\n";
	cout << "Zadejte maximalni delku fronty: ";
	int qs;
	cin >> qs;
	Queue line(qs); // ve front� m��e b�t maxim�ln� qs lid�

	cout << "Zadejte pocet simulovanych hodin: ";
	int hours; // po�et simulovan�ch hodin
	cin >> hours;
	// jeden cyklus simulace trv� jednu minutu
	long cyclelimit = MIN_PER_HR * hours; // po�et cykl�

	cout << "Zadejte prumerny pocet zakazniku za hodinu: ";
	double perhour; // pr�m�rn� po�et z�kazn�k� za hodinu
	cin >> perhour;
	double min_per_cust; // pr�m�rn� doba mezi p��chodem z�kazn�k�
	min_per_cust = MIN_PER_HR; // za hodinu;

	Item temp; // data nov�ho z�kazn�ka
	long turnaways = 0; // po�et odm�tnut�ch z�kazn�k�
	long customers = 0; // po�et z�kazn�k� ve front�
	long served = 0; // po�et obslou�en�ch z�kazn�k�
	long sum_line = 0; // celkov� d�lka fronty
	int wait_time = 0; // doba �ek�n� na bankomat
	long line_wait = 0; // celkov� doba �ek�n� ve front�

// b�h simulace
	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust)) // nov� z�kazn�k
		{
			if (line.isfull())
				turnaways++;
			else
			{
				customers++;
				temp.set(cycle); // cycle = �as p��chodu
				line.enqueue(temp); // p�id� nov�ho z�kazn�ka do fronty
			}
		}
		if (wait_time <= 0 && !line.isempty())
		{
			line.dequeue (temp); // vy�izuje dal��ho z�kazn�ka
			wait_time = temp.ptime(); // po wait_time minut
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time > 0)
			wait_time--;
		sum_line += line.queuecount();
	}
// v�pis v�sledk�
	if (customers > 0)
	{
		cout << " prijato zakazniku: " << customers << endl;
		cout << " obslouzeno zakazniku: " << served << endl;
		cout << " odmitnuto zakazniku: " << turnaways << endl;
		cout << "prumerna delka fronty: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout.setf(ios_base::showpoint);
		cout << (double) sum_line / cyclelimit << endl;
		cout << " prumerna cekaci doba: "
				<< (double) line_wait / served << " minutes\n";
	}
	else
		cout << "Nejsou zadni zakaznici!\n";
	cout << "Hotovo!\n";

	return 0;
}

// x = pr�m�rn� doba v minut�ch mezi dv�ma z�kazn�ky
// n�vratov� hodnota je true, pokud se do t�to doby objev� nov� z�kazn�k
bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}
