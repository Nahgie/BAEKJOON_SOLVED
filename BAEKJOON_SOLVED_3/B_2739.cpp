#include <iostream>

int main() {

	int num = 0;

	std::cin >> num;

		for (int i = 1; i <= 9; i++) { // N*1 부터 N*9 까지 출력

			std::cout << num << " * " << i << " = " << num * i << std::endl; // 입력받은 단을 출력

		}

	return 0;
}