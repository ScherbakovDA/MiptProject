//
// Created by denis on 21.05.18.
//

#include "Drawing.h"

void Drawing()
{

    while(Window::GetWindow().isOpen())
    {
        Window::CleanWindow();
        Window::DisplayWindow();
    }
}