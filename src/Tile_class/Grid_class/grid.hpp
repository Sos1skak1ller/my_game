#pragma once
#include <vector>
#include <iostream>
#include "/Users/sosiska_killer/Documents/VSCode_Projects/c++_projects/Pr/my_game/src/Tile_class/tile.hpp"  

class Grid {
public:
    Grid(int rows, int cols);

    Tile& getTile(int row, int col); // Получить тайл по его координатам

    int getNumRows() const; // Получить количество строк

    int getNumCols()const; // Получить количество столбцов

private:
    int numRows;
    int numCols;
    std::vector<std::vector<Tile>> grid;
};

