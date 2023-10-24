#include <iostream>
#include "city.hpp"

City::City() {
    // В конструкторе класса можно произвести инициализацию членов класса
    
}

void City::initialize() {
    // Инициализация игры, загрузка ресурсов, создание объектов и т.д.
    iniGrid();
    
}

void City::update(float deltaTime) {
    // Обновление состояния игры на каждом кадре
}

void City::render(sf::RenderWindow& window) {
    // Отрисовка игры на экране
}

void City::handleInput() {
    // Обработка пользовательского ввода (нажатия клавиш, щелчки мыши и т.д.)
}
