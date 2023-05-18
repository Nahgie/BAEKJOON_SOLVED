#include <iostream>

int main() {

	int num1 = 0, num2 = 0;

	while (1) { //무한루프

		std::cin >> num1 >> num2;

		if (std::cin.eof() == true) { //std::cin으로 EOF를 입력받았으면 while()문 탈출
		
			break; 
		
		} else {
			
			std::cout << num1 + num2 << std::endl;
		
		}
	}

	return 0;
}