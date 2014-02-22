// string1.cpp -- metody t��dy String
#include <cstring> // n�kdy string.h 
#include "string1.h" // obsahuje <iostream>
using std::cin;
using std::cout;

// inicializace �lena statick� t��dy

int String::num_strings = 0;

// statick� metody
int String::HowMany()
{
	return num_strings;
}

// metody t��dy
String::String(const char * s) // konstrukce String z �et�zce C
{
	len = std::strlen(s); // nastav velikost
	str = new char[len + 1]; // p�id�l pam�
	std::strcpy(str, s); // inicializuj ukazatel
	num_strings++; // nastav ��ta� objekt�
}

String::String() // implicitn� konstruktor
{
	len = 4;
	str = new char[1];
	str[0] = '\0'; // implicitn� �et�zec
	num_strings++;
}

String::String(const String & st)
{
	num_strings++; // aktualizace statick�ho �lena
	len = st.len; // stejn� d�lka
	str = new char [len + 1]; // p�id�l pam�
	std::strcpy(str, st.str); // zkop�ruj �et�zec na nov� m�sto
}

String::~String() // nezbytn� destruktor
{
	--num_strings; // nutn�
	delete [] str; // nutn�
}

// metody p�et�en�ho oper�toru

		// String p�i�a� String
String & String::operator=(const String & st)
{
	if (this == &st)
		return *this;
	delete [] str;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
}

		// C string p�i�a� String
String & String::operator=(const char * s)
{
	delete [] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}

		// znakov� p��stup �ten�/z�pis pro nekonstantn� String
char & String::operator[](int i)
{
	return str[i];
}

		// znakov� p��stup pouze pro �ten� pro konstantn� String 
const char & String::operator[](int i) const
{
	return str[i];
}

// p��tel� p�et�en�ho oper�toru

bool operator<(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
	return st2.str < st1.str;
}

bool operator==(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

		// jednoduch� v�stup String 
ostream & operator<<(ostream & os, const String & st)
{
	os << st.str;
	return os;
}

		// rychl� a ne�ist� vstup String
istream & operator>>(istream & is, String & st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}
