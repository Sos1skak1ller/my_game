#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <ctime>

class GameObj {
public:
    GameObj(const sf::Texture& texture, const sf::Vector2f& position);
    void move(const sf::Vector2f& offset);
    void draw(sf::RenderWindow& window);
    sf::Vector2f getPosition() const;

protected:
    sf::Sprite sprite;
    sf::Vector2f position;
};
