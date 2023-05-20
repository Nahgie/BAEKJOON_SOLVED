#include <iostream>

void GetSortData(int* pA , int BSK_PCS , int CHANGE_TIME) {

	for (int i = 0 ; i < CHANGE_TIME ; i++) {

		int replace_num1 = 0, replace_num2 = 0;

		std::cin >> replace_num1 >> replace_num2;

		int temp = 0; // 임시저장 변수

		//배열 자리바꾸기
		temp = pA[replace_num1];
		pA[replace_num1] = pA[replace_num2];
		pA[replace_num2] = temp;

	}

	for (int k = 1 ; k <= BSK_PCS ; k++) {

		std::cout << pA[k] << " ";
	}

}

int main() {

	int* arr;
	int bsk = 0, time = 0;

	std::cin >> bsk >> time;

	arr = new int[bsk + 1]{}; // 동적 메모리를 여유있게 입력받은 값 보다 하나 더 할당

	for (int arr_init = 1; arr_init <= bsk; arr_init++) { // 바구니 순서와 적힌 번호를 매칭 시킴
		arr[arr_init] = arr_init;
	}

	GetSortData(arr,bsk,time);
	
	delete[] arr; // 메모리 해제

	return 0;
}

/*


1 2 3 4 5

2 1 5 5 5

2 1 4 3 5

3 1 4 2 5

3 1 4 2 5

*/