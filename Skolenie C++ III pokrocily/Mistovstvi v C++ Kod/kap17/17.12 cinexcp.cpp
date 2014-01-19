// cinexcp.cpp -- vyvol�n� v�jimky pomoc� cin 
#include <iostream>
#include <exception>

int main()
{
	using namespace std;
	// failbit zp�sob� vyvol�n� v�jimky
	cin.exceptions(ios_base::failbit);
	cout << "Zadejte cisla: ";
	int sum = 0;
	int input;
	try {
		while (cin >> input)
		{
			sum += input;
		}
	} catch(ios_base::failure & bf)
	{
		cout << bf.what() << endl;
		cout << "O! ta hruza!\n";
	}

	cout << "Posledni zadana hodnota = " << input << endl;
	cout << "Soucet = " << sum << endl;
	
	return 0;
}
