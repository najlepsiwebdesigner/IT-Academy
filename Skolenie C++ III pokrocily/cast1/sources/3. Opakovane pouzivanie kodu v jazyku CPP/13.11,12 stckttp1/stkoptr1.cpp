// stkoptr1.cpp -- test z�sobn�ku ukazatel�
#include <iostream>
#include <cstdlib> // pro rand(), srand()
#include <ctime> // pro time()
#include "stcktp1.h"
const int Num = 10;
int main()
{
	std::srand(std::time(0)); // nastav� rand()
	std::cout << "Zadejte prosim velikost zasobniku: ";
	int stacksize;
	std::cin >> stacksize;
// vytvo�� pr�zdn� z�sobn�k se �ty�mi polo�kami
	Stack<const char *> st(stacksize);

// do ko�e
	const char * in[Num] = {
		" 1: Hank Gilgamesh", " 2: Kiki Ishtar",
		" 3: Betty Rocker", " 4: Ian Flagranti",
		" 5: Wolfgang Kibble", " 6: Portia Koop",
		" 7: Joy Almondo", " 8: Xaverie Paprika",
		" 9: Juan Moore", "10: Misha Mache"
		};
// z ko�e
	const char * out[Num];
	int processed = 0;
	int nextin = 0;
	while (processed < Num)
	{
		if (st.isempty())
			st.push(in[nextin++]);
		else if (st.isfull())
			st.pop(out[processed++]);
		else if (std::rand() % 2 && nextin < Num) // �ance 50 %
			st.push(in[nextin++]);
		else
			st.pop(out[processed++]);
	}
	for (int i = 0; i < Num; i++)
		std::cout << out[i] << std::endl;

	std::cout << "Nashledanou\n";
	return 0;
}
