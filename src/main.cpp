#include <iostream>
#include <time.h>
#include "board.h"


int main() {
    // setup random seed
    srand(time(NULL));

    Board b;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << b.get_cell(i, j) << ", ";
        }
        std::cout << std::endl;
    }
}
