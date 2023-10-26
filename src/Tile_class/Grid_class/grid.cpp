#include "grid.hpp"

// Реализация конструктора
Grid::Grid(int rows, int cols) : numRows(rows), numCols(cols) {
    grid.resize(numRows, std::vector<Tile>(numCols));
}

// Реализация метода для получения тайла по координатам
Tile& Grid::getTile(int row, int col) {
    if (row >= 0 && row < numRows && col >= 0 && col < numCols) {
        return grid[row][col];
    } else {
        // Вернуть пустой тайл или обработать ошибку
        return grid[0][0];
    }
}

// Реализация методов для получения количества строк и столбцов
int Grid::getNumRows() const {
    return numRows;
}

int Grid::getNumCols() const {
    return numCols;
}
