// fill.cpp -- zm�na vypl�ovac�ho znaku pol�
#include <iostream>

int main()
{
	using std::cout;
	cout.fill('*');
	char * staff[2] = { "Waldo Whipsnade", "Wilmarie Wooper"};
	long bonus[2] = {900, 1350};

	for (int i = 0; i < 2; i++)
	{
		cout << staff[i] << ": $";
		cout.width(7);
		cout << bonus[i] << "\n";
	}

	return 0;
}
