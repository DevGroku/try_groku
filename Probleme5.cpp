#include <iostream>
#include <string>

bool Divise(int factor) {
    bool result = true;

    for (int i=2 ; i<=20; i++) {
        if (factor % i != 0) {
            result = false;
            break;
        }
    }
    return result;
}

int main () {
    int number = 2;

    while (Divise(number) == false) {
        number++;
    }

    std::cout << number << std::endl;
}