#include "timeControl.hpp"

GameTimer::GameTimer() : deltaTime(0.0f), timeScale(1.0f), isRunning(false) {}

// Начать таймер
void GameTimer::Start() {
    if (!isRunning) {
        clock.restart();
        isRunning = true;
    }
}

// Остановить таймер
void GameTimer::Stop() {
    if (isRunning) {
        deltaTime = 0.0f;
        isRunning = false;
    }
}

// Установить масштаб времени (ускорение симуляции)
void GameTimer::SetTimeScale(float scale) {
    timeScale = scale;
}

// Получить текущий масштаб времени
float GameTimer::GetTimeScale() const {
    return timeScale;
}

// Обновить таймер и получить прошедшее время
float GameTimer::Update() {
    if (isRunning) {
        deltaTime = clock.restart().asSeconds() * timeScale;
    } else {
        deltaTime = 0.0f;
    }
    return deltaTime;
}
