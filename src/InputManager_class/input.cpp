#include "input.hpp"

InputManager::InputManager(RenderWindow& window) : window(window) {
    setCursorVisible(true);
}

InputManager::InputManager(RenderWindow& window, bool hideCursor) : window(window) {
    setCursorVisible(!hideCursor);
}

void InputManager::update() {
    Event event;
    while (window.pollEvent(event)) {
        if (event.type == Event::Closed) {
            window.close();
        }

        if (event.type == Event::KeyPressed) {
            handleKeyPress(event.key.code);
        }
    }

    cursorPosition = Mouse::getPosition(window);
}

void InputManager::setCursorVisible(bool visible) {
    window.setMouseCursorVisible(visible);
}

Vector2i InputManager::getCursorPosition() const {
    return cursorPosition;
}

void InputManager::handleKeyPress(Keyboard::Key key) {
    // Обработка нажатия клавиш, например:
    if (key == Keyboard::Escape) {
        window.close();
    }
    // Добавьте обработку других клавиш по вашим потребностям.
}

bool InputManager::isKeyPressed(Keyboard::Key key){
    if(key == Keyboard::Space){
        
    }
}
