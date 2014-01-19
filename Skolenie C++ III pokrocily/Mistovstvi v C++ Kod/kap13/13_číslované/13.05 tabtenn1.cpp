// tabtenn1.cpp -- metody z�kladn� a odvozen� t��dy
#include "tabtenn1.h"
#include <iostream>
#include <cstring>
// Metody TableTennisPlayer
TableTennisPlayer::TableTennisPlayer (const char * fn, const char * ln, 
						bool ht)
{
	std::strncpy(firstname, fn, LIM - 1);
	firstname[LIM - 1] = '\0';
	std::strncpy(lastname, ln, LIM - 1);
	lastname[LIM - 1] = '\0';
	hasTable = ht;
}

void TableTennisPlayer::Name() const
{
	std::cout << lastname << ", " << firstname;
}

// Metody RatedPlayer
RatedPlayer::RatedPlayer(unsigned int r, const char * fn,
					const char * ln, bool ht) : TableTennisPlayer(fn, ln, ht)
{
	rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp)
					: TableTennisPlayer(tp), rating(r)
{
}
