#include <iostream>

int main() {

	int stars = 0;

	std::cin >> stars;

	for (int i = 0; i < stars; i++) { //입력받은 값 만큼 루프
		for (int j = 0; j <= i; j++) { //1행 마다 별 갯수 추가
			std::cout << "*";

		}
		std::cout << std::endl; //열 개행
	}

	return 0;
}