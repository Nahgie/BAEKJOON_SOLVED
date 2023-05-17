#include <iostream>

int main() {

	int score = 0;

	std::cin >> score;

	if ((score >= 90) && (score <= 100 )) { // 90점 이상 100점 까지
		
		std::cout << "A" << std::endl;
	
	} else if ((score >= 80) && score <= 89) { // 80점 이상 89점 까지
		
		std::cout << "B" << std::endl;

	} else if ((score >= 70) && (score <= 79)) { // 70점 이상 79점 까지
	
		std::cout << "C" << std::endl;
		
	} else if ((score >= 60) && (score <= 69)) { // 60점 이상 69점 까지

		std::cout << "D" << std::endl;
		
	} else {

		std::cout << "F" << std::endl;

	}

	return 0;
}