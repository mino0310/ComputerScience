#include <iostream>

int function() {
	int a = 2;
	return a;
}

int main() {
	const int& c = function();

	std::cout << c << std::endl;
	return 0;
}


