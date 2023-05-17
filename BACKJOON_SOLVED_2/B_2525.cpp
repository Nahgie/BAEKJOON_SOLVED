#include <iostream>

int main() {

    int Hr = 0, Min = 0, Add_Time = 0;

    std::cin >> Hr >> Min >> Add_Time;

    Hr += Add_Time / 60; // 입력받은 시간이 60분 이상이면 1시간 추가
    Min += Add_Time % 60; // 위에서 1시간씩 더하고 남은 시간을 분으로 추가

    if (Min >= 60) { // 60분 보다 크거나 같으면

        Hr++; // 한시간 추가
        Min -= 60; // 가지고 있는 시간에서 60분을 뺌
       
    }   if (Hr >= 24) { Hr -= 24; } // 24를 넘기거나 24시일때 24시간을 뺌

    std::cout << Hr << " " << Min << std::endl;

	return 0;
}