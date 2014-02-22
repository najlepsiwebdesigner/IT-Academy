// file2.cpp -- obsahuje funkce volan� v souboru file1.cpp
#include <iostream>
#include <cmath>
#include "coordin.h" // �ablony struktur, prototypy funkc�

// konvertuje pravo�hl� sou�adnice na pol�rn�
polar rect_to_polar(rect xypos)
{
	using namespace std;
	polar answer;

	answer.distance =
		sqrt( xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer; // vrac� strukturu polar
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
