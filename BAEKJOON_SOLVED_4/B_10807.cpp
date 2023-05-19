#include <iostream>

int main() {

	int in_max_range = 0, find_number = 0, equal_count = 0;

	std::cin >> in_max_range; // 입력받을 숫자의 갯수를 정함 (n개 사용자 입력)

	int* dynamic_arr = new int [in_max_range] {}; //n개의 입력을 받아야하므로 동적 메모리 할당

	for (int i = 0; i < in_max_range; i++) { // 위에서 입력받은 범위로 배열에 값을 저장함 (n개 사용자 입력)

		std::cin >> dynamic_arr[i];

	}
	
	std::cin >> find_number; // 입력받은 숫자중 사용자가 찾을 숫자를 입력

	for (int j = 0; j < in_max_range; j++) { //입력받은 n의 값을 기준으로 배열을 검색
		if (find_number == dynamic_arr[j]) { // 사용자가 찾는 숫자와 배열의 값이 동일하면 equal_count 변수에 1씩 더함
			equal_count++;
		}
	}

	std::cout << equal_count << std::endl; //결과 출력

	delete[] dynamic_arr; // 동적 메모리 해제

	return 0;
}

