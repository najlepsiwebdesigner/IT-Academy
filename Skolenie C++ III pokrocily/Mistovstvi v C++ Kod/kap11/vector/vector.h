// vector.h -- T��da Vector s oper�torem << a re�imem stavu (mode)
#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR
{
	class Vector
	{
	private:
		double x; 		// horizont�ln� hodnota
		double y; 		// vertik�ln� hodnota
		double mag; 	// d�lka vektoru
		double ang; 	// sm�r vektoru
		char mode; 		// 'r' = pravo�hl�, 'p' = pol�rn� 
	// soukrom� metody pro nastaven� hodnot
		void set_mag();
		void set_ang();
		void set_x();
		void set_y();
	public:
		Vector();
		Vector(double n1, double n2, char form = 'r');
		void set(double n1, double n2, char form = 'r');
		~Vector();
		double xval() const {return x;} 			// vrac� hodnotu x
		double yval() const {return y;} 			// vrac� hodnotu y		
		double magval() const {return mag;} 	// vrac� velikost
		double angval() const {return ang;} 	// vrac� �hel
		void polar_mode(); 								// nastav� re�im na 'p'
		void rect_mode(); 									// nastav� re�im na 'r'
	// funkce pro p�et�en� oper�tor�
		Vector operator+(const Vector & b) const;
		Vector operator-(const Vector & b) const;
		Vector operator-() const;
		Vector operator*(double n) const;
	// sp��telen� funkce
		friend Vector operator*(double n, const Vector & a);
		friend std::ostream & operator<<(std::ostream & os, const Vector & v);
	};

	} // konec jmenn�ho prostoru VECTOR
#endif
