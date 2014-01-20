#include <iostream>
using namespace std;

template<class TYPE>
void PrintTwice(const TYPE& data) // nemodifikujem predanu premennu
{
    cout<<"Twice: " << data * 2 << endl;
}

int main() {
	int test = 2;
	
	cout << test << "\n";
	PrintTwice(test);
	cout << test;

	return 0;
}