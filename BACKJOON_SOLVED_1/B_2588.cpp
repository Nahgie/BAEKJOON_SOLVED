#include <iostream>
#include <string>

int main() {

	int num1 = 0, num2 = 0;

	std::cin >> num1 >> num2;
	std::string str = std::to_string(num2); //입력받은 정수를 문자열로 변환

	//변환한 문자열을 필요한 자릿수로 잘라내어 다시 정수로 변환 후 출력
	std::cout << num1 * std::stoi(str.substr(2, 3)) << std::endl;
	std::cout << num1 * std::stoi(str.substr(1, 1)) << std::endl;
	std::cout << num1 * std::stoi(str.substr(0, 1)) << std::endl;
	std::cout << num1 * num2;

	return 0;
}