#include <iostream>

int main() {

	int stars = 0;

	std::cin >> stars ;

	for (int i = stars; i > 0; i--) { //입력받은 값 만큼 1행씩 생성

		for (int j = 1; j < i; j++) { //입력받은 값에서 -1개 만큼 1행씩 공백생성 ex) 5를 입력 받았다면 공백 4개 생성
			
			std::cout << " ";

		}

		for (int k = i; k <= stars; k++) { // 입력받은 값 만큼 1행마다 별을 하나씩 추가

			std::cout << "*";

		}

		std::cout << std::endl; //열 개행
	}

	return 0;
}