#include <iostream>

int main() {

	int input_range = 0;
	
	std::cin >> input_range;

	for (int i = 0; i < input_range; i++) { //입력받은 값 만큼 덧셈 수행

		int a = 0, b = 0;
		std::cin >> a >> b;
		std::cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << std::endl; // Case #n: n + n = n 형식으로 몇번째 결과인지 무슨 값을 넣었는지를 출력함

	}

	return 0;
}