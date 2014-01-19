// nested.cpp -- pou�it� fronty s vno�enou t��dou
#include <iostream>

#include <string>
#include "queuetp.h"

int main()
{
	using std::string;
	using std::cin;
	using std::cout;

	QueueTP<string> cs(5);
	string temp;

	while(!cs.isfull())
	{
		cout << "Zadejte prosim svoje jmeno. Obslouzeni budete "
				"v poradi, v kterem jste prisli.\n"
				"jmeno: ";
		getline(cin, temp);
		cs.enqueue(temp);
	}
	cout << "Fronta je zaplnena. Zacina zpracovani!\n";

	while (!cs.isempty())
	{
		cs.dequeue(temp);
		cout << " Nyni se zpracovava " << temp << "...\n";
	}
	return 0;
}
