#include <iostream>
using namespace std;

int main ()
{
   double* pvalue  = NULL; // Pointer initialized with null
   pvalue  = new double;   // Request memory for the variable
 
 	char* arrayValue  = NULL;   // Pointer initialized with null
	arrayValue  = new char[20]; // Request memory for the variable
	arrayValue[0] = 'x';
	arrayValue[3] = 'g';
	arrayValue[19] = '\0';

 // 	// bezpecnejsi sposob - operator new vracia v pripade neuspechu NULL
	// double* pvalue  = NULL;
	// if( !(pvalue  = new double ))
	// {
	//    cout << "Error: out of memory." <<endl;
	//    exit(1);

	// }


   *pvalue = 29494.99;     // Store value at allocated address
   cout << "Value of pvalue : " << *pvalue << endl;
   cout << "Value of arrayValue : " << arrayValue[0] << " " << arrayValue[3] << endl;


   delete pvalue;         // free up the memory.

   delete [] arrayValue;        // Delete array pointed to by pvalue

   return 0;
}