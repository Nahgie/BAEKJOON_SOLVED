#include <iostream>

int main() {

	int max_range = 0, find_under_value = 0;

	std::cin >> max_range >> find_under_value;

	int* number_arr = new int[max_range]; // n개의 입력을 받아야하므로 동적 메모리 할당

	for (int i = 0; i < max_range; i++) { // 위에서 입력받은 범위로 배열에 값을 저장함 (n개 사용자 입력)

		std::cin >> number_arr[i];

	}

	for (int j = 0; j < max_range; j++) { // n개의 숫자입력을 받을 범위를 기준으로 배열을 탐색
		if (find_under_value > number_arr[j]) { //배열 탐색중 입력받은 값보다 미만인 값을 찾으면 루프당 1개씩 출력
			
			std::cout << number_arr[j] << " ";

		}
	}

	delete[] number_arr; // 동적 메모리 해제

	return 0;
}