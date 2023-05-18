#include <iostream>

int main() {

	std::ios_base::sync_with_stdio(false); // C와 CPP의 입출력 동기화 해제 C에서 사용하는 입출력 함수들 사용불가능 (CPP 독립버퍼 사용)
	std::cin.tie(NULL); // std::cout 과 std::cin의 입출력 순서를 보장못함

	int input_range = 0;

	std::cin >>input_range ;

	for (int i = 0; i < input_range; i++) { //입력받은 값만큼 덧셈연산과 결과출력을 수행함

		int a = 0, b = 0;
		std::cin >> a >> b;
		std::cout << a + b << '\n';
	}

	return 0;
}