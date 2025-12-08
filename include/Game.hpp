#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <memory>

#include "Entity/FruitEntity.hpp"
#include "Entity/BombEntity.hpp"
#include "Entity/SliceEntity.hpp"

#define MAX_ENTITIES 5
#define MAX_SLICEENTITIES 50

class Game
{
private:
    sf::RenderWindow window;

    std::vector<std::unique_ptr<AimEntity>> entities;
    std::vector<std::unique_ptr<SliceEntity>> sliceEntities;

    sf::Clock clkSliceSp;
    sf::Clock clkSliceDlt;

    float spawnTimer;
    float nextSpawnDelay;
    bool isMouseMovedPressed;

    void processEvents();
    void update();
    void render();
    void spawnEntity();
    void sliceEntity();

public:
    Game();
    void run();
};
