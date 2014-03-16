#ifndef BOARD_H
#define BOARD_H

class Board {
public:
    int grid[4][4];

    Board();

private:

    void random_tile();
    int generate_tile();
};

#endif  //BOARD_H
