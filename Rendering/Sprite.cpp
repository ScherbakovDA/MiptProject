//
// Created by denis on 21.05.18.
//

#include "../Instruments/Libraries.h"
#include "Sprite.h"

sf::Texture Sprite::SetTexture()
{
    texture.loadFromFile(ObjectName);
    return texture;
}

void Sprite::Draw()
{
    sf::RenderWindow& window = Window::getWindow();

    while(window.isOpen())
        window.draw(this->Sprite);
}
