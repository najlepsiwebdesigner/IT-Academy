// coordin.h -- �ablony struktur a prototypy funkc�
// �ablony struktur
#ifndef COORDIN_H_
#define COORDIN_H_

struct polar
{
	double distance; 	// vzd�lenost od po��tku
	double angle; 			// sm�r od po��tku
};
struct rect
{
	double x; 	// horizont�ln� vzd�lenost od po��tku
	double y; 	// vertik�ln� vzd�lenost od po��tku
};

// prototypy
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
#endif
