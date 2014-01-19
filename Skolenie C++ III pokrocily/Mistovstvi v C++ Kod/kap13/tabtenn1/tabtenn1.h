// tabtenn1.h -- jednoduch� d�di�nost
#ifndef TABTENN1_H_
#define TABTENN1_H_
// jednoduch� z�kladn� t��da
class TableTennisPlayer
{
private:
	enum {LIM = 20};
	char firstname[LIM];
	char lastname[LIM];
	bool hasTable;
public:
	TableTennisPlayer (const char * fn = "none",
									const char * ln = "none", bool ht = false);
	void Name() const;
	bool HasTable() const { return hasTable; } ;
	void ResetTable(bool v) { hasTable = v; };
};

// jednoduch� odvozen� t��da
class RatedPlayer : public TableTennisPlayer
{
private:
	unsigned int rating;
public:
	RatedPlayer (unsigned int r = 0, const char * fn = "none",
														const char * ln = "none", bool ht = false);
	RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
	unsigned int Rating() { return rating; }
	void ResetRating (unsigned int r) {rating = r;}
};

#endif
