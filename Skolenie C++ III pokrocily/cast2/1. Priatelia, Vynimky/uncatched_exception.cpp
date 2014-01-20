#include <iostream>
#include <exception>

using namespace std;

void myQuit() {
	cout << "nezachytena vynimka, koncim";
	exit(5);
}

int main() {
	// tu mi len zdochne program
	throw;

	set_terminate(myQuit);
	
	// throw; // tu zavolam myQuit()

	return 0;
}