#include <iostream>
#include <string>

template<typename TYPE>
TYPE kratdva(TYPE a) {
	return a * 2;
}

int main() {
	std::cout << kratdva<int>(2);
	std::cout << kratdva<string>(2)

	return 0;
}