// stonewt.h -- definice t��dy Stonewt
#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{
private:
	enum {Lbs_per_stn = 14}; 			// po�et liber na jeden k�men
	int stone; 									// v�ha v cel�ch kamenech
	double pds_left; 						// zbytek v�hy v libr�ch
	double pounds; 							// celkov� v�ha v libr�ch
public:
	Stonewt(double lbs); 					// konstruktor typu double pro libry
	Stonewt(int stn, double lbs); 	// konstruktor pro kameny, libry
	Stonewt(); 									// implicitn� konstruktor
	~Stonewt();
	void show_lbs() const; 				// zobrazen� v�hy v libr�ch
	void show_stn() const; 				// zobrazen� v�hy v kamenech
};
#endif
