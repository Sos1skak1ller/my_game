#include <SFML/Graphics.hpp>

using namespace sf;

class InputManager {
public:
    InputManager(RenderWindow& window) : window(window) {
        // Устанавливаем начальное положение курсора
        cursorPosition = sf::Vector2i(0, 0);
    }

    void update() {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }

            if (event.type == Event::KeyPressed) {
                // Обработка нажатий клавиш
                handleKeyPress(event.key.code);
            }

            if (event.type == Event::MouseMoved) {
                // Обновляем положение курсора
                cursorPosition = sf::Mouse::getPosition(window);
            }
        }
    }

    void setCursorVisible(bool visible) {
        window.setMouseCursorVisible(visible);
    }

    Vector2i getCursorPosition() const {
        return cursorPosition;
    }

private:
    RenderWindow& window;
    Vector2i cursorPosition;

    void handleKeyPress(Keyboard::Key key) {
        // Обработка нажатий клавиш клавиатуры
        if (key == Keyboard::Escape) {
            // Пример: нажатие клавиши Пробел
            
        }
        // Добавьте обработку других клавиш по мере необходимости
    }
};
