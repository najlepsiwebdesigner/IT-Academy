#include <iostream>
#include <exception>

using namespace std;

void myUnexpected() {
	cout << "nezachytena vynimka, koncim";
	exit(5);
}

int main() {
	// tu mi len zdochne program
	// throw "dezo";

	set_unexpected(myUnexpected);
	
	// throw; // tu zavolam myQuit()
	// throw "dezo";

	return 0;
}