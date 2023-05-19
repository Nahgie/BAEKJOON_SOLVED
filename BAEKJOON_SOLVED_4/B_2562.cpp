#include <iostream>

void max(int arr[]) {

	int detected_line = 0;
	int max = 0;

	for (int i = 0; i < 9; i++) {

		std::cin >> arr[i];

		if (max < arr[i]) { // 최댓값 검출

			max = arr[i]; // 위 조건이 검출되면 max 변수에 검출한 최댓값을 저장
			detected_line = i + 1; // 위 조건이 검출되면 루프를 돈 횟수(i)를 detected_line 변수에 저장 

		}
	
	}

	std::cout << max << '\n' << detected_line << std::endl;

}

int main() {

	int number_arr[10]{};

	max(number_arr);

	return 0;
}