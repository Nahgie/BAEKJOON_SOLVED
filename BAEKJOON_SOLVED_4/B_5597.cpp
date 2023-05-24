#include <iostream>

int main() {

	int student_arr[31] , chk_member = 0;

	for (int num_Init = 1; num_Init < 31; num_Init++) { // 학생번호를 미리 배열에 대입
		student_arr[num_Init] = num_Init;
	}

	for (int d_in = 1; d_in < 29; d_in++) { // 입력을 28번 받는다고 했으니 28루프 동안 입력을 받음
		
		std::cin >> chk_member;

		for (int d_chk = 1; d_chk < 31; d_chk++) {
			if (chk_member == student_arr[d_chk]) { //입력받은 값을 기존 학생번호를 찾는데 사용
				student_arr[d_chk] = 0; // 입력한 학생번호와 기존에 저장된 학생번호가 일치하면 0으로 변경
			}
		}
	}

	for (int d_show = 1; d_show < 31; d_show++) {
		if(student_arr[d_show] != 0) //학생번호가 0이 아닌 공간을 찾아 출력
		std::cout << student_arr[d_show] << std::endl;

	}

	
	return 0;
}