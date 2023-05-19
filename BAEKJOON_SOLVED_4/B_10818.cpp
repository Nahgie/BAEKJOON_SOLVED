#include <iostream>

int main() {

	int max_range = 0;
	
	std::cin >> max_range;

	int* number_arr = new int[max_range]{}; // 동적 메모리 할당

	for (int i = 0; i < max_range; i++) {

		std::cin >> number_arr[i];

	}

	for (int j = 0; j < max_range; j++) { // 배열탐색
		
		int tmp = 0; // 최댓값 임시 저장소
		
		if (number_arr[j] > number_arr[0]) { // 최대값을 number_arr[0]에 저장
			
			tmp = number_arr[0];
			number_arr[0] = number_arr[j];
			number_arr[j] = tmp; 

		}
		
		int tmp_2 = 0; // 최솟값 임시 저장소

		if (number_arr[j] < number_arr[max_range - 1]) { // 최솟값을 number_arr[max_range - 1]에 저장
			tmp_2 = number_arr[max_range - 1];
			number_arr[max_range - 1] = number_arr[j];
			number_arr[j] = tmp_2;

		}

	}

	std::cout << number_arr[max_range - 1] << " " << number_arr[0] << std::endl; // 최솟값 최댓값 출력

	delete[] number_arr; // 동적 메모리 해제

	return 0;
}