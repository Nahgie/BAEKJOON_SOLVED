#include <iostream>

int main() {

	int x = 0, y = 0, z = 0;

	std::cin >> x >> y >> z;

	std::cout << (x + y) % z << std::endl;
	std::cout << ((x % y) + (y % z)) % z << std::endl;
	std::cout << (x * y) % z << std::endl;
	std::cout << ((x % z) * (y % z)) % z << std::endl;

	return 0;
}