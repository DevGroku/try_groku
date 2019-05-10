#include <iostream>
#include <vector>
#include <math.h>

bool Premier(int a) {
    bool result = true;

    for (int i = 2 ; i < sqrt(a) ; i++) {
        if ((a % i) == 0) {
            result = false;
            break;
        }
    }
    return result;
}

int main() {
    std::vector<int> nbr_premier;

    //nbr_premier[0] = 2;*/

    for (int i = 2; i < 200000 ; i++) {
        if (Premier(i) == true){
            nbr_premier.push_back(i);
        }
    }

    std::cout << nbr_premier.size() << std::endl;
    std::cout << nbr_premier[10001] << std::endl;
}