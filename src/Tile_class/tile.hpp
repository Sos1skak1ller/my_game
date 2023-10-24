#pragma once
#include <string>
#include <SFML/Graphics.hpp>

using namespace sf;

class Tile {
public:
    enum Status {
        EMPTY,
        OCCUPIED,
        DESTROYED
    };

    Tile();  // Конструктор по умолчанию

    Tile(Status initialStatus); // Конструктор с начальным статусом

    Status getStatus() const; // Получить текущий статус тайтла

    void setStatus(Status newStatus); // Установить новый статус тайтла

    std::string getStatusString() const; // Получить текстовое представление статуса для отладки

private:
    Status status;
    Color borderColour = Color::White;
};
