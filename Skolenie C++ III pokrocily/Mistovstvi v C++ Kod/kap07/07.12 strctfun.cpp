// strctfun.cpp -- funkce s parametrem typu struktura
#include <iostream>
#include <cmath>

// �ablony struktur
struct polar
{
	double distance; 		// vzd�lenost od po��tku
	double angle; 				// sm�r od po��tku
};
struct rect
{
	double x; 					// horizont�ln� vzd�lenost od po��tku
	double y; 					// vertik�ln� vzd�lenost od po��tku
};

// prototypy
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
	using namespace std;
	rect rplace;
	polar pplace;

	cout << "Zadejte hodnoty x a y: ";
	while (cin >> rplace.x >> rplace.y) 	// �hledn� pou�it� cin
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Dalsi dve cisla (q na ukoceni): ";
	}
	cout << "Hotovo!\n";
	return 0;
}

// konvertuje pravo�hl� sou�adnice na pol�rn�
polar rect_to_polar(rect xypos)
{
	using namespace std;
	polar answer;

	answer.distance =
		sqrt( xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer; 		// vrac� strukturu polar
}

// zobrazen� pol�rn�ch sou�adnic spolu s konverz� �hlu na stupn�
void show_polar (polar dapos)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "vzdalenost = " << dapos.distance;
	cout << ", uhel = " << dapos.angle * Rad_to_deg;
	cout << " stupnu\n";
}
