// strngbad.h -- definice �patn� t��dy string
#include <iostream>
#ifndef STRNGBAD_H_
#define STRNGBAD_H_
class StringBad
{
private:
	char * str; // ukazatel na �et�zec
	int len; // d�lka �et�zce
	static int num_strings; // po�et objekt�
public:
	StringBad(const char * s); // konstruktor
	StringBad(); // implicitn� konstruktor
	~StringBad(); // destruktor
// p��telsk� funkce
	friend std::ostream & operator<<(std::ostream & os,
										const StringBad & st);
};
#endif
