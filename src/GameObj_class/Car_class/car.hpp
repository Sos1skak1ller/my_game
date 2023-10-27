#pragma once
#include "/Users/sosiska_killer/Documents/VSCode_Projects/c++_projects/Pr/my_game/src/GameObj_class/gameObj.hpp"

class Car : public GameObj {
public:
    Car(const sf::Texture& texture, const sf::Vector2f& position);
    static Car createCar(const sf::Texture& texture, const sf::Vector2f& position);
};


