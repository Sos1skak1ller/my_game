#include "gameObj.hpp"

GameObj::GameObj(const sf::Texture& texture, const sf::Vector2f& position)
    : sprite(texture), position(position) {
    sprite.setPosition(position);
}

void GameObj::move(const sf::Vector2f& offset) {
    position += offset;
    sprite.move(offset);
}

void GameObj::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}

sf::Vector2f GameObj::getPosition() const {
    return position;
}


