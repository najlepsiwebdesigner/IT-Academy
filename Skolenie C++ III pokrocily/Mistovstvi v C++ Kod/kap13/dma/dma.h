// dma.h -- d�di�nost a dynamick� p�id�lov�n� pam�ti
#ifndef DMA_H_
#define DMA_H_
#include <iostream>

// z�kladn� t��da s DMA
class baseDMA
{
private:
	char * label;
	int rating;

public:
	baseDMA(const char * l = "null", int r = 0);
	baseDMA(const baseDMA & rs);
	virtual ~baseDMA();
	baseDMA & operator=(const baseDMA & rs);
	friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};

// odvozen� t��da bez DMA
// nen� pot�eba destruktor
// pou��v� implicitn� kop�rovac� konstruktor
// pou��v� implicitn� oper�tor p�i�azen�
class lacksDMA :public baseDMA
{
private:
	enum { COL_LEN = 40};
	char color[COL_LEN];
public:
	lacksDMA(const char * c = "blank", const char * l = "null", int r = 0);
	lacksDMA(const char * c, const baseDMA & rs);
	friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
};

// odvozen� t��da s DMA
class hasDMA :public baseDMA
{
private:
	char * style;
public:
	hasDMA(const char * s = "none", const char * l = "null", int r = 0);
	hasDMA(const char * s, const baseDMA & rs);
	hasDMA(const hasDMA & hs);
	~hasDMA();
	hasDMA & operator=(const hasDMA & rs);
	friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
};

#endif
