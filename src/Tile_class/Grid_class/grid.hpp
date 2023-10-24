#pragma once
#include <vector>
#include <iostream>
#include "/Users/sosiska_killer/Documents/VSCode_Projects/c++_projects/Pr/my_game/src/Tile_class/tile.hpp"  

class Grid {
public:
    Grid(int rows, int cols);

    // Получить тайл по его координатам
    Tile& getTile(int row, int col);

    // Метод для 
    void setTileBorderColor(int row, int col, sf::Color color);

    // Получить количество строк
    int getNumRows() const;

    // Получить количество столбцов
    int getNumCols()const;

private:
    int numRows;
    int numCols;
    std::vector<std::vector<Tile>> grid;
};

