#include "grid.hpp"

// Определение конструктора класса Grid
Grid::Grid(int rows, int cols) : numRows(rows), numCols(cols) {
    // Инициализация сетки с пустыми тайлами
    grid.resize(numRows, std::vector<Tile>(numCols));
}

// Определение метода getTile
Tile& Grid::getTile(int row, int col) {
    if (row >= 0 && row < numRows && col >= 0 && col < numCols) {
        return grid[row][col];
    } else {
        // Обработка ошибки или возврат специального тайла по умолчанию
        // В данном случае, вернем первый тайл
        return grid[0][0];
    }
}

// Определение метода getNumRows
int Grid::getNumRows() const {
    return numRows;
}

// Определение метода getNumCols
int Grid::getNumCols() const {
    return numCols;
}
