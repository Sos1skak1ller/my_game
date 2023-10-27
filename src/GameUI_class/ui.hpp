#pragma once
#include <SFML/Graphics.hpp>
#include "/Users/sosiska_killer/Documents/VSCode_Projects/c++_projects/Pr/my_game/src/InputManager_class/input.hpp" // Включаем заголовочный файл InputManager.hpp

class GameUI {
public:
    GameUI(sf::RenderWindow& window, InputManager& inputManager);

    void draw();

    void updateEconomyInfo(const std::string& info);

    void handleInput();

    // Другие методы для обновления интерфейса и управления временем

private:
    sf::RenderWindow& window;
    InputManager& inputManager; // Ссылка на InputManager

    sf::Sprite backgroundSprite;
    sf::Sprite roadToolButton;
    // Другие элементы интерфейса (кнопки, панели, текст)

    sf::Text economyInfoText;
    // Для отображения информации о экономике

    // Другие ресурсы, такие как текстуры, шрифты и прочее
};