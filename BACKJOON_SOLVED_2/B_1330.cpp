#include <iostream>

int main() {

	int a = 0, b = 0;

	std::cin >> a >> b;

	if (a < b) {	std::cout << "<" << std::endl;	} // a보다 b가 클때
	
	else if (a > b) {	std::cout << ">" << std::endl;	} // b보다 a가 클때
	
	else {	std::cout << "==" << std::endl;	} // a와 b가 같을때

	return 0;
}