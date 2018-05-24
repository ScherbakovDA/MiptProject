#ifndef MIPTPROJECT_SPRITE_H
#define MIPTPROJECT_SPRITE_H

#include "../Instruments/Libraries.h"
#include "../Instruments/Dot.h"
#include "../Instruments/Components.h"
#include "Window.h"


class Sprite
{
    sf::Sprite sprite;
    sf::Texture texture;
    sf::CircleShape circle;

public:

    Sprite(float x, float y);

    sf::Texture SetTexture();
    std::string filename;

    void Draw();
};

#endif //MIPTPROJECT_SPRITE_H
