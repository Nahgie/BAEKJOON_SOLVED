#include <iostream>

int main() {
    int num[10];
    bool arr[42] = { 0, };
    int cnt = 0;

    for (int i = 0; i < 10; i++) {

        std::cin >> num[i];
        arr[num[i] % 42]++;

    }

    for (int i = 0; i < 42; i++) {
        //std::cout << i << " : " << arr[i] << std::endl; //디버그용 코드
        if (arr[i] > 0) {
            cnt++;
        }
    }

    std::cout << cnt << std::endl;

    return 0;
}