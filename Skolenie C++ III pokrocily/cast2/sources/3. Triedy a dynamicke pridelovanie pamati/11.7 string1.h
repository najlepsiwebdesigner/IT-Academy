// string1.h - opraven� a roz���en� definice t��dy string
#include <iostream>
using std::ostream;
using std::istream;

#ifndef STRING1_H_
#define STRING1_H_
class String
{
private:
	char * str; 						// ukazatel na �et�zec
	int len; 								// d�lka �et�zce
	static int num_strings; 	// po�et objekt�
	static const int CINLIM = 80; // vstupn� limit cin 
public:
// konstruktory a dal�� metody
	String(const char * s); // 
	String(); // implicitn� konstruktor
	String(const String &); // kop�ruj konstruktor
	~String(); // destruktor
	int length () const { return len; }
// metody p�et�en�ho oper�toru
	String & operator=(const String &);
	String & operator=(const char *);
	char & operator[](int i);
	const char & operator[](int i) const;
// p��tel� p�et�en�ho oper�toru
	friend bool operator<(const String &st, const String &st2);
	friend bool operator>(const String &st1, const String &st2);
	friend bool operator==(const String &st, const String &st2);
	friend ostream & operator<<(ostream & os, const String & st);
	friend istream & operator>>(istream & is, String & st);
// statick� funkce
	static int HowMany();
};
#endif
