#include <iostream>

int main() {

	int input_type_byte = 0 , loop_count = 0;

	std::cin >> input_type_byte;
	
	loop_count += input_type_byte / 4; // long int는 4바이트 정수라서 입력받은 값에 나누기 4를 한 값을 루프횟수로 사용 (loop_count 변수에 저장)

	while(loop_count != 0) { // loop_count변수가 0이 되면 while() 종료
	
		std::cout << "long "; // 루프 횟수마다 "long" 출력
		loop_count--; //루프 횟수 1씩 차감
	}

	std::cout << "int"; //while()이 종료 되면 "int" 출력

	return 0;
}