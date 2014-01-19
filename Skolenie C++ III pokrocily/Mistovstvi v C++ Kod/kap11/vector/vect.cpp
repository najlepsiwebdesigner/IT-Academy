// vect.cpp -- metody t��dy Vector
#include <cmath>
#include "vect.h" 		// p�idej <iostream>
using std::sin;
using std::cos;
using std::atan2;
using std::cout;

namespace VECTOR
{

	const double Rad_to_deg = 57.2957795130823;

	// soukrom� metody
	// vypo�ti velikost z x a y
	void Vector::set_mag()
	{
		mag = sqrt(x * x + y * y);
	}

	void Vector::set_ang()
	{
		if (x == 0.0 && y == 0.0)
			ang = 0.0;
		else
			ang = atan2(y, x);
	}
	// nastav x z pol�rn� sou�adnice
	void Vector::set_x()
	{
		x = mag * cos(ang);
	}

	// nastav y z pol�rn� sou�adnice
	void Vector::set_y()
	{
		y = mag * sin(ang);
	}

	// ve�ejn� metody
	Vector::Vector() 	// implicitn� konstruktor
	{
		x = y = mag = ang = 0.0;
		mode = 'r';
	}

	// vytvo� vektor z pravo�hl�ch sou�adnic, je-li tvar r
	// (implicitn�) nebo z pol�rn�ch sou�adnic, je-li tvar p
	Vector::Vector(double n1, double n2, char form) 
	{
		mode = form;
		if (form == 'r')
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == 'p')
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "nespr�vn� 3. argument ve Vector() -- ";
			cout << "vector nastaven na 0\n";
			x = y = mag = ang = 0.0;
			mode = 'r';
		}
	}
	// nastav vektor z pravo�hl�ch sou�adnic, je-li forma r
	// (implicitn�), jinak z pol�rn�ch sou�adnic, je-li forma p
	void Vector:: set(double n1, double n2, char form)
	{
		mode = form;
		if (form == 'r')
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == 'p')
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "nespr�vn� 3. argument ve Vector() -- ";
			cout << "vektor nastaven na 0\n";
			x = y = mag = ang = 0.0;
			mode = 'r';
		}
	}

	Vector::~Vector() 			// destruktor
	{
	}

	void Vector::polar_mode() // nastav pol�rn� re�im
	{
		mode = 'p';
	}

	void Vector::rect_mode() // nastav pravo�hl� re�im
	{
		mode = 'r';
	}

	// p�et�en� oper�tor�
	// p�idej dva oper�tory Vector
	Vector Vector::operator+(const Vector & b) const
	{
		return Vector(x + b.x, y + b.y);
	}

	// ode�ti Vector b od a
	Vector Vector::operator-(const Vector & b) const
	{
		return Vector(x - b.x, y - b.y);
	}
	
	// obra� znam�nko Vector
	Vector Vector::operator-() const
	{
		return Vector(-x, -y);
	}

	// vyn�sob Vector kr�t n
	Vector Vector::operator*(double n) const
	{
		return Vector(n * x, n * y);
	}

	// p��telsk� metody
	// vyn�sob n kr�t Vector a
	Vector operator*(double n, const Vector & a)
	{
		return a * n;
	}

	// je-li re�im r, vypi� pravo�hl� sou�adnice,
	// jinak vypi� pol�rn� sou�adnice (re�im p)
	std::ostream & operator<<(std::ostream & os, const Vector & v)
	{
		if (v.mode == 'r')
			os << "(x,y) = (" << v.x << ", " << v.y << ")";
		else if (v.mode == 'p')
		{
			os << "(m,a) = (" << v.mag << ", "
				<< v.ang * Rad_to_deg << ")";
		}
		else
			os << "neplatn� re�im objektu Vector";
		return os;
	}

} 		// konec jmenn�ho prostoru VECTOR
