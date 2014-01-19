// strctptr.cpp -- funkce s parametry typu ukazatel na strukturu
#include <iostream>
#include <cmath>

// �ablony struktur
struct polar
{
	double distance; 	// vzd�lenost od po��tku
	double angle; 			// sm�r od po��tku
};
struct rect
{
	double x; 				// horizont�ln� vzd�lenost od po��tku
	double y; 				// vertik�ln� vzd�lenost od po��tku
};

// prototypy
void rect_to_polar(const rect * pxy, polar * pda);
void show_polar (const polar * pda);

int main()
{
	using namespace std;
	rect rplace;
	polar pplace;

	cout << "Zadejte hodnoty x a y: ";
	while (cin >> rplace.x >> rplace.y)
	{
		rect_to_polar(&rplace, &pplace); 		// p�ed�n� adresy
		show_polar(&pplace); 							// p�ed�n� adresy
		cout << "Dalsi dve cisla (q na ukonceni): ";
	}
	cout << "Hotovo!\n";
	return 0;
}

// zobrazen� pol�rn�ch sou�adnic spolu s konverz� �hlu na stupn�
void show_polar (const polar * pda)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "vzdalenost = " << pda->distance;
	cout << ", uhel = " << pda->angle * Rad_to_deg;
	cout << " stupnu\n";
}

// konvertuje pravo�hl� sou�adnice na pol�rn�
void rect_to_polar(const rect * pxy, polar * pda)
{
	using namespace std;
	pda->distance =
		sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
}
