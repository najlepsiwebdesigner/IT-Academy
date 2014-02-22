// strngbad.cpp -- metody t��dy StringBad
#include <cstring> 		// n�kdy tak� string.h
#include "strngbad.h"
using std::cout;

// inicializace statick� polo�ky t��dy
int StringBad::num_strings = 0;

// metody t��dy

// konstrukce StringBad z �etzce typu C 
StringBad::StringBad(const char * s)
{
	len = std::strlen(s); 					// nastav� velikost
	str = new char[len + 1]; 				// p�id�l� pam�
	std::strcpy(str, s); 						// inicializuje ukazatel
	num_strings++; 								// nastav� ��ta� objekt�
	cout << num_strings << ": \"" << str
			<< "\" object created\n"; 	// Informace pro obsluhu
}

StringBad::StringBad() // implicitn� konstruktor
{
	len = 4;
	str = new char[4];
	std::strcpy(str, "C++"); 									// implicitn� �et�zec
	num_strings++;
	cout << num_strings << ": \"" << str
			<< "\" implicitni objekt vytvoren\n"; 	// FYI
}

StringBad::~StringBad() 										// nutn� destruktor
{
	cout << "\"" << str << "\"objekt zrusen, "; 	// FYI
	--num_strings; 													// nutn�
	cout << num_strings << " left\n"; 					// FYI
	delete [] str; 													// nutn�
}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
	os << st.str;
	return os;
}
