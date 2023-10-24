#include "tile.hpp"
#include <iostream>

Tile::Tile() : status(EMPTY) {}

// Конструктор с начальным статусом
Tile::Tile(Status initialStatus) : status(initialStatus) {}

// Получить текущий статус тайтла
Tile::Status Tile::getStatus() const {
    return status;
}

// Получить текстовое представление статуса для отладки
std::string Tile::getStatusString() const {
    switch (status) {
        case EMPTY:
            return "EMPTY";
        case OCCUPIED:
            return "OCCUPIED";
        case DESTROYED:
            return "DESTROYED";
        default:
            return "UNKNOWN";
    }
}
