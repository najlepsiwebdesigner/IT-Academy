// functor.cpp -- pou�it� funktoru
#include <iostream>
#include <list>
#include <iterator>

template<class T> // functorov� t��da definuje operator()()
class TooBig
{
private:
	T cutoff;
public:
	TooBig(const T & t) : cutoff(t) {}
	bool operator()(const T & v) { return v > cutoff; }
};

int main()
{
	using std::list;
	using std::cout;
	using std::endl;

	TooBig<int> f100(100); // limit = 100
	list<int> yadayada;
	list<int> etcetera;
	int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};

	yadayada.insert(yadayada.begin(), vals, vals + 10);
	etcetera.insert(etcetera.begin(), vals, vals + 10);
	std::ostream_iterator<int, char> out(cout, " ");
	cout << "Puvodni seznamy:\n";
	copy(yadayada.begin(), yadayada.end(), out);
	cout << endl;
	copy(etcetera.begin(), etcetera.end(), out);
	cout << endl;
	yadayada.remove_if(f100); // pou�it� pojmenovan�ho funk�n�ho objektu
	etcetera.remove_if(TooBig<int>(200)); // konstrukce funk�n�ho objektu
	cout <<" Zkracene seznamy:\n";
	copy(yadayada.begin(), yadayada.end(), out);
	cout << endl;
	copy(etcetera.begin(), etcetera.end(), out);
	cout << endl;

	return 0;
}
