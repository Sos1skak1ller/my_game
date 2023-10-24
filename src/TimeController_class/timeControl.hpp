#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class TimeController {
public:
    TimeController() : timeScale(1.0f), currentTime(0.0f), deltaTime(0.0f) {
        clock.restart();
    }

    // Обновление времени
    void update() {
        deltaTime = clock.restart().asSeconds() * timeScale;
        currentTime += deltaTime;
    }

    // Установка масштаба времени (ускорение или замедление)
    void setTimeScale(float scale) {
        timeScale = scale;
    }

    // Получение текущего времени
    float getCurrentTime() const {
        return currentTime;
    }

    // Получение прошедшего времени с масштабом
    float getDeltaTime() const {
        return deltaTime;
    }

private:
    sf::Clock clock;     // Часы для измерения времени
    float timeScale;     // Масштаб времени (1.0f для обычной скорости)
    float currentTime;   // Текущее время
    float deltaTime;    // Время, прошедшее с последнего обновления
};
