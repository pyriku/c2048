#include <iostream>
#include <time.h>


class Board {
public:
    int grid[4][4];

    Board() {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                grid[i][j] = 0;
            }
        }

        random_tile();
        random_tile();
    }

private:

    void random_tile() {
        int col = rand() % 4;
        int row = rand() % 4;

        if (grid[col][row] == 0) {
            grid[col][row] = generate_tile();
        } else {
            random_tile();
        }
    }

    int generate_tile() {
        int value = 2;

        if ((rand() % 10) < 1) {
            value = 4;
        }
        return value;
    }
};


int main() {
    // setup random seed
    srand(time(NULL));

    Board b;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << b.grid[i][j] << ", ";
        }
        std::cout << std::endl;
    }
}
