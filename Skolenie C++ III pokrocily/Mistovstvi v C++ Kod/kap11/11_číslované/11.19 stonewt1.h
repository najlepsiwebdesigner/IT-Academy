// stonewt1.h -- upraven� definice t��dy Stonewt
#ifndef STONEWT1_H_
#define STONEWT1_H_
class Stonewt
{
private:
	enum {Lbs_per_stn = 14};				// po�et liber na k�men
	int stone; 										// po�et cel�ch kamen�
	double pds_left; 							// zbytek v�hy v libr�ch
	double pounds; 								// celkov� v�ha v libr�ch
public:
	Stonewt(double lbs); 						// konstruktor pro libry
	Stonewt(int stn, double lbs); 		// konstruktor pro kameny
	Stonewt(); 										// implicitn� konstruktor
	~Stonewt();
	void show_lbs() const; 					// zobrazen� v�hy v libr�ch
	void show_stn() const; 					// zobrazen� v�hy v kamenech
// konverzn� funkce
	operator int() const;
	operator double() const;
}; ;
#endif
