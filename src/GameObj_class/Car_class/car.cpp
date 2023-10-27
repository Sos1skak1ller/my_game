#include "car.hpp"

Car::Car(const sf::Texture& texture, const sf::Vector2f& position)
    : GameObj(texture, position) {
    // Дополнительные инициализации для машины (если необходимо)
}

// Метод для создания машины на определенных условиях
static Car createCar(const sf::Texture& texture, const sf::Vector2f& position) {
    return Car(texture, position);
}

