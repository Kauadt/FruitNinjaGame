#include "Entity/FruitEntity.hpp"
#include <cmath>

FruitEntity::FruitEntity(sf::Vector2f startPos, sf::Vector2u screenSize)
    : AimEntity(startPos, screenSize)
{
    shape.setFillColor(sf::Color::Red);
}

bool FruitEntity::isClicked(const sf::Vector2f &mousePos) const
{
    float dx = shape.getPosition().x - mousePos.x;
    float dy = shape.getPosition().y - mousePos.y;
    return (dx * dx + dy * dy) <= (shape.getRadius() * shape.getRadius());
}

void FruitEntity::setDead(sf::Vector2f boundPos)
{
    if (shape.getGlobalBounds().contains(boundPos))
        dead = true;
}
