#include <iostream>

int main() {
	
	int Hr = 0, Min = 0;
	
	std::cin >> Hr >> Min;

	Min -= 45; // 45분 일찍 일어난다고 했으니 45분 차감

	if (Min < 0) { // 분이 음수로 바뀌면
		Min += 60; // 60분을 더함
		Hr -= 1;	// 1시간 차감

		if (Hr < 0) Hr = 23; // 시간이 음수로 바뀌면 23시간으로 변경
	}

	std::cout << Hr << " " << Min << std::endl;

	return 0;
}