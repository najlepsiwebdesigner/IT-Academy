// tmp2tmp.cpp -- �ablonov� p��tel� �ablonov�ch t��d
#include <iostream>
using std::cout;
using std::endl;

// template prototypes
template <typename T> void counts();
template <typename T> void report(T &);

// template class
template <typename TT>
class HasFriendT
{
private:
	TT item;
	static int ct;
public:
	HasFriendT(const TT & i) : item(i) {ct++;}
	~HasFriendT() { ct--; }
	friend void counts<TT>();
	friend void report<>(HasFriendT<TT> &);
};

template <typename T>
int HasFriendT<T>::ct = 0;
// template friend functions definitions
template <typename T>
void counts()
{
	cout << "velikost sablony: " << sizeof(HasFriendT<T>) << "; ";
	cout << "sablona counts(): " << HasFriendT<T>::ct << endl;
}

template <typename T>
void report(T & hf)
{
	cout << hf.item << endl;
}

int main()
{
	counts<int>();
	HasFriendT<int> hfi1(10);
	HasFriendT<int> hfi2(20);
	HasFriendT<double> hfdb(10.5);
	report(hfi1); // generate report(HasFriendT<int> &)
	report(hfi2); // generate report(HasFriendT<int> &)
	report(hfdb); // generate report(HasFriendT<double> &)
	cout << "vystup counts<int>():\n";
	counts<int>();
	cout << "vystup counts<double>():\n";
	counts<double>();

	return 0;
}
