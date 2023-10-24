#include <iostream>
#include <SFML/Graphics.hpp>
#include "/Users/sosiska_killer/Documents/VSCode_Projects/c++_projects/Pr/my_game/src/Tile_class/tile.hpp"
#include "/Users/sosiska_killer/Documents/VSCode_Projects/c++_projects/Pr/my_game/src/Tile_class/Grid_class/grid.hpp"

using namespace sf;

void iniGrid() {
    int windowWidth = 3600; 
    int windowHeight = 1620; 
    RenderWindow window(VideoMode(windowWidth, windowHeight), "Grid Example");

    // Создаем объект сетки
    int numRows = 15; // Увеличиваем количество строк
    int numCols = 30; // Увеличиваем количество столбцов
    Grid gameGrid(numRows, numCols);

    // Определяем цвета для различных статусов
    Color emptyColor = Color::Black;
    Color occupiedColor = Color::Blue;
    Color destroyedColor = Color::Red;
    Color borderColor = Color::White; // Цвет границы

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
        }

        // Обновляем время, если это необходимо
        // TimeController

        // Очищаем окно
        window.clear();

        // Размеры тайла на основе разрешения окна
        float tileWidth = static_cast<float>(windowWidth) / numCols;
        float tileHeight = static_cast<float>(windowHeight) / numRows;

        // Отрисовываем тайлы с учетом их статуса и границ
        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < numCols; ++j) {
                Tile& tile = gameGrid.getTile(i, j);

                // Определяем цвет для тайла на основе его статуса
                Color tileColor;
                if (tile.getStatus() == Tile::EMPTY) {
                    tileColor = emptyColor;
                } else if (tile.getStatus() == Tile::OCCUPIED) {
                    tileColor = occupiedColor;
                } else {
                    tileColor = destroyedColor;
                }

                // Рисуем тайл
                RectangleShape tileShape(Vector2f(tileWidth, tileHeight));
                tileShape.setPosition(j * tileWidth, i * tileHeight);
                tileShape.setFillColor(tileColor);
                window.draw(tileShape);

                // Рисуем границу тайла
                RectangleShape borderShape(Vector2f(tileWidth, tileHeight));
                borderShape.setPosition(j * tileWidth, i * tileHeight);
                borderShape.setFillColor(Color::Transparent);
                borderShape.setOutlineThickness(1); // Толщина линии границы
                borderShape.setOutlineColor(borderColor);
                window.draw(borderShape);
            }
        }

        // Отображаем нарисованные тайлы
        window.display();
    }
}
