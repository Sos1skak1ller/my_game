#include "ui.hpp"

    GameUI::GameUI(sf::RenderWindow& window, InputManager& inputManager) : window(window), inputManager(inputManager) {
        // Загрузите текстуры и шрифты
        // Создайте спрайты, текст и другие элементы интерфейса
        // Настройте их позиции и внешний вид
    }

    void GameUI::draw() {
        // Отрисовка интерфейса на экране
        window.draw(backgroundSprite);
        window.draw(roadToolButton);
        // Отрисовка других элементов интерфейса
    }

    void GameUI::updateEconomyInfo(const std::string& info) {
        economyInfoText.setString(info);
    }

    void GameUI::handleInput() {
        inputManager.update(); // Обновляем ввод с помощью InputManager
        if (inputManager.isKeyPressed(sf::Keyboard::Key::A)) {
            // Обработка нажатия клавиши A
        }
        // Другие обработки ввода
    }

    // Другие методы для обновления интерфейса и управления временем
