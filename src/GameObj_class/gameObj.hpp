#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

class GameTimer {
public:
    GameTimer();
    void Start();
    void Stop();
    void SetTimeScale(float scale);
    float GetTimeScale() const;
    float Update();

private:
    sf::Clock clock;
    float deltaTime;
    float timeScale;
    bool isRunning;
};

