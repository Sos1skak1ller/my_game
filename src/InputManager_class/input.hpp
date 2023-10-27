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

    void handleKeyPress(Keyboard::Key key);

    bool isKeyPressed(Keyboard::Key key);

private:
    RenderWindow& window;
    Vector2i cursorPosition;
    // void handleKeyPress(Keyboard::Key key);
    // void isKeyPressed(Keyboard::Key key);
};

