#include <iostream>
using namespace std;

template<class T1, class T2>
void PrintNumbers(const T1& t1Data, const T2& t2Data)
{
     cout << "First value:" << t1Data << "\n";
     cout << "Second value:" << t2Data << "\n\n";
}
// toto sa realne vytvori:
	// void PrintNumbers(int t1Data, int t2Data);
	// void PrintNumbers(int t1Data, double t2Data);
	// void PrintNumbers(double t1Data, int t2Data);


int main() {
	PrintNumbers(10, 100);    // int, int
	PrintNumbers(14, 14.5);   // int, double
	PrintNumbers(59.66, 150); // double, int

	// takto mozem sablone urcit, ake typy parametrov ma pre toto zavolanie pouzit, typy musia sediet!
	// PrintNumbers<int, double>(10.4,13); 
	PrintNumbers<double, double>(10.4,13); 
	
	return 0;
}