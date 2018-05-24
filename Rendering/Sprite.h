

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

    Sprite();

    sf::Texture SetTexture();
    std::string ObjectName;

    void Draw();
};

#endif //MIPTPROJECT_SPRITE_H
