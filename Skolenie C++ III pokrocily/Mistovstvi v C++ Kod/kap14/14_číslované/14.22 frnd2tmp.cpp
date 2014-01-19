// frnd2tmp.cpp -- �ablonov� t��da s ne�ablonov�mi p��teli
#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class HasFriend
{
private:
	T item;
	static int ct;
public:
	HasFriend(const T & i) : item(i) {ct++;}
	~HasFriend() {ct--; }
	friend void counts();
	friend void reports(HasFriend<T> &); // �ablonov� parametr
};

// ka�d� specializace m� sv�j vlastn� statick� datov� �len
template <typename T>
int HasFriend<T>::ct = 0;

// ne�ablonov� �len v�ech t��d HasFriend<T>
void counts()
{
	cout << "citac int: " << HasFriend<int>::ct << "; ";
	cout << "citac double: " << HasFriend<double>::ct << endl;
}

// ne�ablonov� �len v�ech t��d HasFriend<int>
void reports(HasFriend<int> & hf)
{
	cout <<"HasFriend<int>: " << hf.item << endl;
}

// non-template friend to the HasFriend<double> class
void reports(HasFriend<double> & hf)
{
	cout <<"HasFriend<double>: " << hf.item << endl;
}

int main()
{
	cout << "Neni deklarovany zadny objekt: ";
	counts();
	HasFriend<int> hfi1(10);
	cout << "Po deklaraci hfi1: ";
	counts();
	HasFriend<int> hfi2(20);
	cout << "Po deklaraci hfi2: ";
	counts();
	HasFriend<double> hfdb(10.5);
	cout << "Po deklaraci hfdb: ";
	counts();
	reports(hfi1);
	reports(hfi2);
	reports(hfdb);
	
	return 0;
}
