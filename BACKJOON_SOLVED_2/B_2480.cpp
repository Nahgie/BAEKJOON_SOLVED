#include <iostream>

int main() {

	int dice_1 = 0, dice_2 = 0, dice_3 = 0, result = 0;

	std::cin >> dice_1 >> dice_2 >> dice_3;

	if (dice_1 == dice_2 && dice_2 == dice_3) { //1,2,3번 주사위 눈이 전부 동일할때

		result = 10000 + (dice_1 * 1000);

	} else if (dice_1 == dice_2 || dice_2 == dice_3) { // 1,2,3번 주사위 중 눈이 2개만 일치할때 (2번 주사위 기준으로 비교)

		result = 1000 + (dice_2 * 100);

	} else if (dice_1 == dice_3 || dice_3 == dice_2) { // 1,2,3번 주사위 중 눈이 2개만 일치할때 (3번 주사위 기준으로 비교)

		result = 1000 + (dice_3 * 100);

	} else { //주사위 눈이 전부 불일치할때 (1,2,3번 주사위중 가장 높은 눈을 찾음)
		if (dice_1 > dice_2 && dice_3 < dice_1) {	result = dice_1 * 100;	 } // 1번 주사위 눈과 2번 3번 주사위 눈을 비교
		else if (dice_2 > dice_1 && dice_3 < dice_2) {	result = dice_2 * 100;	 } // 2번 주사위 눈과 1번 3번 주사위 눈을 비교
		else if (dice_3 > dice_1 && dice_2 < dice_3) {	result = dice_3 * 100;	 } // 3번 주사위 눈과 2번 3번 주사위 눈을 비교
	}

	std::cout << result << std::endl;

	return 0;
}