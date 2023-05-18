#include <iostream>

int main() {

	int input_max = 0 , result = 0;

	std::cin >> input_max;

	for (int i = 0; i <= input_max; i++) { result += i; } // 0부터 입력받은 수까지 result 변수에 더함

	std::cout << result << std::endl;

	return 0;
}