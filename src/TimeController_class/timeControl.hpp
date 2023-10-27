#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

class GameTimer {
public:
    GameTimer(); // Конструктор 

    void Start(); // Начать таймер

    void Stop(); // Остановить таймер

    void SetTimeScale(float scale); // Установить масштаб времени (ускорение симуляции)

    float GetTimeScale() const; // Получить текущий масштаб времени
    
    float Update(); // Обновить таймер и получить прошедшее время

private:
    sf::Clock clock;
    float deltaTime;
    float timeScale;
    bool isRunning;
};

