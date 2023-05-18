#include <iostream>

int main() {

	int paid_price = 0 , goods_each = 0 , total = 0; //변수 초기화
	
	std::cin >> paid_price >> goods_each; //지불한 금액과 구매한 상품종류를 입력

	for (int i = 0; i < goods_each; i++) { //각각의 상품종류 만큼 금액과 갯수를 입력받음
		
		int price = 0, pcs = 0; //
		
		std::cin >> price >> pcs;
		total += price * pcs;
	}

	if (paid_price == total) { std::cout << "Yes" << std::endl; } // 지불한 금액과 상품가격의 총합이 맞으면 "Yes" 출력
	else { std::cout << "No" << std::endl; } //지불한 금액과 상품가격의 총합이 안맞으면 "No" 출력

	return 0;
}