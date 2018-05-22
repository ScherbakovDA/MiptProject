//
// Created by denis on 21.05.18.
//

#ifndef MIPTPROJECT_SPRITE_H
#define MIPTPROJECT_SPRITE_H

#include "../Instruments/Libraries.h"
#include "../Instruments/Dot.h"
#include "../Instruments/Components.h"


class Sprite
{
    sf::Sprite sprite;
    sf::Texture texture;
    sf::CircleShape circle;
    Dot center;

public:

    Sprite(GameObject* gameObject, std::string textureName);

    sf::Texture SetTexture();
    std::string ObjectName;

    void Draw();
};

#endif //MIPTPROJECT_SPRITE_H
