#include <iostream>

int main() {
	
	int num1 = 0, num2 = 0;

	do {

		std::cin >> num1 >> num2;

		if ((num1 != 0 || num2 != 0)!= 0) { std::cout << num1 + num2 << std::endl; } //num1 num2의 값이 둘 다 0 일때 0출력 방지용 조건문

	} while (num1 != 0 || num2 != 0); //num1 num2의 값이 둘 다 0 일때 do~while() 종료

	return 0;
}