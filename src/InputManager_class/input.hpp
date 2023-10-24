#pragma once

#include <SFML/Graphics.hpp>

using namespace sf;

class InputManager {
public:
    InputManager(RenderWindow& window);

    void update();

    void setCursorVisible(bool visible);

    Vector2i getCursorPosition() const;

private:
    RenderWindow& window;
    Vector2i cursorPosition;

    void handleKeyPress(Keyboard::Key key);
};

