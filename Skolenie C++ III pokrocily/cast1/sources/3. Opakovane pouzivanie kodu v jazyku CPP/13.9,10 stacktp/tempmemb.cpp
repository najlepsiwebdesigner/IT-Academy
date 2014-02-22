// tempmemb.cpp -- �lenov� �ablon
#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class beta
{
private:
	template <typename V> // vno�en� �len �ablonov� t��dy
	class hold
	{
	private:
		V val;
	public:
		hold(V v = 0) : val(v) {}
		void show() const { cout << val << endl; }
		V Value() const { return val; }
	};
	hold<T> q; // objekt �ablony
	hold<int> n; // objekt �ablony
public:
	beta( T t, int i) : q(t), n(i) {}
	template<typename U> // metoda �ablony
	U blab(U u, T t) { return (n.Value() + q.Value()) * u / t; }
	void Show() const { q.show(); n.show();}
};
int main()
{
	beta<double> guy(3.5, 3);

	guy.Show();
	cout << guy.blab(10, 2.3) << endl;
	cout << "Hotovo\n";
	return 0;
}
