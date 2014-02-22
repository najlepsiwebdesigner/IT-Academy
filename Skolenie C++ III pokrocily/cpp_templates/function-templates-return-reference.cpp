#include <iostream>

template<class T>
T& GetMax(T& t1, T& t2) // nemozem pouzit const, pretoze sa jedna o predanu referenciu, musim specifikovat vystupny typ
{
    if (t1 > t2)
    {
        return t1;
    }
    // else 
    return t2;
}


int main() {
	int A = 3;
	// int B = 5;
	// try this
	int B = 2;

	std::cout << "Max is:" << GetMax(A, B) << " \nA:" << A << "\n" << "B:" << B << "\n";
	
	GetMax(A, B) = 0; // prepisem max nulou, pretoze som vratil referenciu - povodne predanu funkcii

	std::cout << "\nA:" << A << "\n" << "B:" << B << "\n";

	return 0;
}