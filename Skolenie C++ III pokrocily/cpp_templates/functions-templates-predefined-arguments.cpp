#include <iostream>
using namespace std;

template<class T>
void PrintNumbers(T array[], int array_size, T filter = T())
{
   for(int nIndex = 0; nIndex < array_size; ++nIndex)
   {
       if ( array[nIndex] != filter) // Print if not filtered
           cout << array[nIndex] << " ";
   }
}

// instantiated as - void PrintNumbers(int array[], int array_size, int filter = int()){}


int main () {
	
	int Array[10] = {1,2,0,3,4,2,5,6,0,7};
 	PrintNumbers(Array, 10);

 	cout << "\n\n";

 	PrintNumbers(Array, 10, 2);

 	cout << "\n\n";
 	
 	PrintNumbers(Array, 10, 1);


	return 0;
}