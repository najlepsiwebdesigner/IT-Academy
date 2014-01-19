// tempover.cpp -- p�et�ov�n� �ablon
#include <iostream>

template <typename T> // �ablona A
void ShowArray(T arr[], int n);

template <typename T> // �ablona B
void ShowArray(T * arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main(void)
{
	using namespace std;
	int things[6] = {13, 31, 103, 301, 310, 130};
	struct debts mr_E[3] =
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe ", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double * pd[3];

// Nastaven� ukazatel� na skupinu �len� struktury v poli mr_E
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;

	cout << "Vypis souctu veci pana E:\n";
// V�ci jsou v poli int
	ShowArray(things, 6); // pou�ije �ablonu A
	cout << "Vypis dluhu pana E:\n";
// pd je pole ukazatel� na double
	ShowArray(pd, 3); // pou�ije �ablonu B (specializovan�j��)
	
	return 0;
}

template <typename T>
void ShowArray(T arr[], int n)
{
	using namespace std;
	cout << "sablona A\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
	cout << endl;
}

template <typename T>
void ShowArray(T * arr[], int n)
{
	using namespace std;
	cout << "sablona B\n";
	for (int i = 0; i < n; i++)
		cout << *arr[i] << ' ';
	cout << endl;
}
