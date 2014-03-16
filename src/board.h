#ifndef BOARD_H
#define BOARD_H

class Board {
public:
    Board();

    int get_cell(int x, int y);

private:
    // actual matrix
    int grid[4][4];

    void random_tile();
    int generate_tile();
};

#endif  //BOARD_H
