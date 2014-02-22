//usealgo.cpp -- pou�it� n�kolika prvk� STL
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
#include <cctype>
using namespace std;

char toLower(char ch) { return tolower(ch); }
string & ToLower(string & st);
void display(const string & s);

int main()
{
	vector<string> words;
	cout << "Zadejte slova (\"konec\" pro ukonceni):\n";
	string input;
	while (cin >> input && input != "konec")
		words.push_back(input);

	cout << "Zadali jste nasledujici slova:\n";
	for_each(words.begin(), words.end(), display);
	cout << endl;

	// vlo�en� slov do kontejneru typu set, konverze na mal� p�smena
	set<string> wordset;
	transform(words.begin(), words.end(),
		insert_iterator<set<string> > (wordset, wordset.begin()),
		ToLower);
	cout << "\nSeznam slov podle abecedy:\n";
	for_each(wordset.begin(), wordset.end(), display);
	cout << endl;

	// vlo�en� slov a po�et v�skyt� do kontejneru typu map
	map<string, int> wordmap;
	set<string>::iterator si;
	for (si = wordset.begin(); si != wordset.end(); si++)
		wordmap[*si] = count(words.begin(), words.end(), *si);

	// zobrazen� obsahu kontejneru typu map
	cout << "\nPocet vyskytu:\n";
	for (si = wordset.begin(); si != wordset.end(); si++)
		cout << *si << ": " << wordmap[*si] << endl;

	return 0;
}

string & ToLower(string & st)
{
	transform(st.begin(), st.end(), st.begin(), toLower);
	return st;
}

void display(const string & s)
{
	cout << s << " ";
}
