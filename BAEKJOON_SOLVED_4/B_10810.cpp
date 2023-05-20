#include <iostream>

int main() {

  int bsk , bsk_line , num1, num2, num3;
  int* arr;

  std::cin >> bsk >> bsk_line; // 바구니 갯수 , 바구니 범위

  arr = new int[bsk + 1] {0,}; // 동적 메모리를 입력받은 수 보다 하나 더 여유있게 할당

  for(int i = 0; i < bsk_line; i++) { //입력 받은 바구니의 범위까지 루프

    std::cin >> num1 >> num2 >> num3; 

    for(int j = num1; j <= num2; j++) { // num1~num2 바구니 범위까지  num3 번 공을 넣는다 

      arr[j] = num3; // num3값을 arr[j]에 그냥 덮어 씀

    }

  }

  for(int k = 1; k <= bsk; k++) {

    std::cout << arr[k] << " ";

  }
  
  delete[] arr; // 메모리 해제

  return 0;
}

/*

(1) 번째 입력 num1 = 1 , num2 = 2 , num3 = 3 [ 1번 부터 2번 바구니 까지 공을 3번씩 넣음]

1 1 0 0 0
2 2 0 0 0
3 3 0 0 0

(2) 번째 입력 num1 = 3 , num2 = 4 , num3 = 4 [ 3번 부터 4번 바구니 까지 공을 4번씩 넣음]

3 3 1 1 0
3 3 2 2 0
3 3 3 3 0
3 3 4 4 0

(3) 번째 입력 num1 = 1 , num2 = 4 , num3 = 1 [ 1번 부터 4번 바구니 까지 공을 1번씩 넣음]

1 1 1 1 0                   //여기서 기존에 값이 있던 배열에다 값을 덮어씀...

(4) 번째 입력 num1 = 2 , num2 = 2 , num3 = 2 [ 2번 부터 2번 바구니 까지 공을 2번씩 넣음 ]

1 1 1 1 0 
1 2 1 1 0                   //2번 배열만 2번 건드니 값 2가 덮어씌워짐

구현보다 글을 읽고 이해하는게 시간이 더 오래걸림...
*/