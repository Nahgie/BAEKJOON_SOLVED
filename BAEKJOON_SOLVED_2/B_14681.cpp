﻿#include <iostream>

int main() {

	int num1 = 0, num2 = 0;

	std::cin >> num1 >> num2;

	if (num1 > 0 && num2 > 0) { // Q1

		std::cout << "1" << std::endl;

	} else if (num1 < 0 && num2 > 0) { // Q2

		std::cout << "2" << std::endl;

	} else if (num1 < 0 && num2 < 0) { // Q3

		std::cout << "3" << std::endl;

	} else { // Q4

		std::cout << "4" << std::endl;

	}

	return 0;
}