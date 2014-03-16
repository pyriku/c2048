#include <iostream>
#include <time.h>
#include "board.h"


Board::Board() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            grid[i][j] = 0;
        }
    }

    random_tile();
    random_tile();
}

int Board::get_cell(int x, int y) {
    return grid[x][y];
}

void Board::random_tile() {
    int col = rand() % 4;
    int row = rand() % 4;

    if (grid[col][row] == 0) {
        grid[col][row] = generate_tile();
    } else {
        random_tile();
    }
}

int Board::generate_tile() {
    int value = 2;

    if ((rand() % 10) < 1) {
        value = 4;
    }
    return value;
}
