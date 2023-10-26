#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

class InputManager {
public:
    InputManager(RenderWindow& window);

    InputManager(RenderWindow& window, bool hideCursor);

    void update();

    void setCursorVisible(bool visible);

    Vector2i getCursorPosition() const;

private:
    RenderWindow& window;
    Vector2i cursorPosition;

    void handleKeyPress(Keyboard::Key key);
};

