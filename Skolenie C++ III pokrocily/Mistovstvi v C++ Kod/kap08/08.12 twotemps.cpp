// twotemps.cpp -- pou�it� p�et�en�ch �ablon funkc�
#include <iostream>
template <class Any> // p�vodn� �ablona
void Swap(Any &a, Any &b);

template <class Any> // nov� �ablona
void Swap(Any *a, Any *b, int n);

void Show(int a[]);
const int Lim = 8;
int main()
{
	using namespace std;
	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << " Funkce pro zamenu cisel typu int generovana prekladacem:\n";
	Swap(i,j); // odpov�d� p�vodn� �ablon�
	cout << "Nyni i, j = " << i << ", " << j << ".\n";

	int d1[Lim] = {0,7,0,4,1,7,7,6};
	int d2[Lim] = {0,6,2,0,1,9,6,9};
	cout << "Puvodni pole:\n";
	Show(d1);
	Show(d2);
	Swap(d1,d2,Lim); // odpov�d� nov� �ablon�
	cout << "Zamenena pole:\n";
	Show(d1);
	Show(d2);
	
	return 0;
}

template <class Any>
void Swap(Any &a, Any &b)
{
	Any temp;
	temp = a;
	a = b;
	b = temp;
}

template <class Any>
void Swap(Any a[], Any b[], int n)
{
	Any temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

void Show(int a[])
{
	using namespace std;
    cout << a[0] << a[1] << "/";
	cout << a[2] << a[3] << "/";
	for (int i = 4; i < Lim; i++)
	cout << a[i];
	cout << "\n";
}
