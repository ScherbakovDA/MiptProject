#include "Sprite.h"

sf::Texture Sprite::SetTexture()
{
    texture.loadFromFile(filename);
    return texture;
}

void Sprite::Draw()
{
    sf::RenderWindow* window = Window::GetWindow();

    while(window->isOpen())
        window->draw(this->circle);
}

Sprite::Sprite(float x, float y)
{

    circle.setRadius(150);
    circle.setOutlineColor(sf::Color::Blue);
    circle.setOutlineThickness(5);
    circle.setPosition(x, y);

}