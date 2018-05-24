

#include "../Instruments/Libraries.h"
#include "Sprite.h"

sf::Texture Sprite::SetTexture()
{
    texture.loadFromFile(ObjectName);
    return texture;
}

void Sprite::Draw()
{
    sf::RenderWindow* window = Window::getWindow();

    while(window->isOpen())
        window->draw(this->circle);
}

Sprite::Sprite()
{
    circle.setRadius(150);
    circle.setOutlineColor(sf::Color::Red);
    circle.setOutlineThickness(5);
    circle.setPosition(10, 20);

}