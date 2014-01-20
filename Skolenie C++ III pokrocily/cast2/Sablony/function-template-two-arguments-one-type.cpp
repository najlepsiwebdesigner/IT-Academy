#include <iostream>
using namespace std;

template<class T>
T testmax(T t1, T t2)
{
   if (t1 > t2)
      return t1;
   return t2;
}



int main() {
	
	// max(120, 14.55); // not valid, not same types!
	cout << testmax<double>(120, 14.55); // Instantiates max<double>(double,double);

	return 0;
}