
#pragma once

#include <SFML/Graphics.hpp> 
#include <iostream>
//Дек добавь и реши нужен ли вооюще он 
#include "/Users/sosiska_killer/Documents/VSCode_Projects/c++_projects/Pr/my_game/src/City_class/iniFunc.hpp"

using namespace sf;

class City {

    // Здесь можно объявить приватные члены класса, такие как:
    // - Контейнеры для хранения дорог, зданий и автомобилей
    // - Менеджеры ресурсов, сетки, генератора зданий, симулятора трафика и другие компоненты

    // Можно также добавить члены для хранения информации о времени, счете и других игровых параметрах

public:
    City(); // Конструктор класса

    void initialize(); // Метод для инициализации игры
    void update(float deltaTime); // Метод для обновления состояния игры
    void render(RenderWindow& window); // Метод для отрисовки игры

    void handleInput(); // Метод для обработки пользовательского ввода

};
