#include <iostream>

int main() {
    for (int i = 0; i <= 10; i++) {
        if (i % 2 == 0) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}

//Output:
//0
//2
//4
//6
//8
//10
