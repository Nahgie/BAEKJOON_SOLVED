#include <iostream>

int main() {

	int input_range = 0;// 변수 초기화
	int* pA = nullptr; //널 포인터 지정
	int* pB = nullptr; //널 포인터 지정

	std::cin >> input_range; // 입력받을 케이스 갯수

	pA = new int[input_range]; //동적 메모리를 배열형태로 할당
	pB = new int[input_range]; //동적 메모리를 배열형태로 할당

	for (int i = 0; i < input_range; i++) { // 위에서 입력받은 숫자를 토대로 루프 (포인터를 사용한 루프에선 <= 사용시 컴파일러 경고가 뜸 사용 자제하기)
		
		std::cin >> pA[i] >> pB[i]; //각각의 동적 메모리에 더할 값을 입력받음
		std::cout << pA[i] + pB[i] << std::endl; // 입력받은 결과를 출력
	
	}
	
	delete[] pA; //사용이 끝난 동적 메모리 해제 (배열 형태로 할당 받았기에 []첨자 연산자를 delete뒤에 붙힘)
	delete[] pB; //사용이 끝난 동적 메모리 해제 (배열 형태로 할당 받았기에 []첨자 연산자를 delete뒤에 붙힘)

	return 0;
}

/* //오늘 공부한 동적메모리 할당을 써보기 위해 아래에 작성한 코드는 주석처리함
int main() {

	int input_range = 0; //변수 초기화

	std::cin >> input_range; //입력받을 케이스 갯수

	for (int i = 0; i < input_range; i++) { //위에서 입력받은 숫자를 토대로 루프
		
		int a = 0, b = 0; // 지역변수 할당
		
		std::cin >> a >> b; //더할 값을 받음
		std::cout << a + b << std::endl; //입력받은 결과를 출력

	}
	return 0;
}*/