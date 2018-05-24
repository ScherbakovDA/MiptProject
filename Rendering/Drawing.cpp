

#include "Drawing.h"

void Drawing()
{

    while(Window::GetWindow()->isOpen())
    {
        Window::CleanWindow();
       //Sprite::Draw();
        Window::DisplayWindow();
    }
}