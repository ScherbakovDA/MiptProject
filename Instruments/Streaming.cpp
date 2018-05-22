//
// Created by denis on 22.05.18.
//

#include "Streaming.h"

Window::Window()
{
    window = new sf::RenderWindow(sf::VideoMode(800,600),"APP");
}

sf::RenderWindow* Window::GetWindow()
{
    static Window OneWindow;
    return OneWindow.window;
}

void Window::CleanWindow()
{
    Window::GetWindow()->clear();
}

void Window::DisplayWindow()
{
    (Window::GetWindow())->display();
}

Streaming::Streaming()
{
    clock.restart();
}

Streaming* Streaming::getInstance()
{
    static Streaming resourse;
    return &resourse;
}