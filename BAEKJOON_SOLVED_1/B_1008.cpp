#include <iostream>

int main(void) {

	int a = 0, b = 0;

	std::cin >> a >> b;

	std::cout.precision(12); //자릿수 출력 문제 때문에 범위 지정 및 수정
	std::cout << std::fixed << (double)a / (double)b << std::endl;

	return 0;
}



