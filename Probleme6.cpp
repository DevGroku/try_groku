#include <iostream>

int Carre(int nbr) {
    nbr = nbr * nbr;
    return nbr;
}

int main() {
    int nbr_1 = 1;
    int sum_square = 0; int square_sum = 0;

    for ( nbr_1 ; nbr_1 <= 100 ; nbr_1++) {
        sum_square = sum_square + Carre(nbr_1);
    }

    nbr_1 = 1;

    for ( nbr_1 ; nbr_1 <= 100 ; nbr_1++) {
        square_sum = square_sum + nbr_1;
    }

    square_sum = Carre(square_sum);
    nbr_1 = square_sum - sum_square;

    std::cout << nbr_1 << std::endl;

}