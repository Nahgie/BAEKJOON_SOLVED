#include <iostream>

int main() {

	int input_year = 0;

	std::cin >> input_year;

	// 4의 배수나 (&& and 연산자 사용) 100의 배수가 아닐때 또는 (|| or 연산자 사용) 400의 배수 일때
	if ((input_year % 4) == 0 && (input_year % 100) !=0 || (input_year % 400) == 0) { std::cout << "1" << std::endl;} 
	else { std::cout << "0" << std::endl;}

	return 0;

}