#ifndef MIPTPROJECT_WINDOW_H
#define MIPTPROJECT_WINDOW_H

#include "../Instruments/Libraries.h"

class Window
{

    sf::RenderWindow* window;
    Window();

public:

    static sf::RenderWindow* GetWindow();

    static void CleanWindow();

    static void DisplayWindow();
};

#endif //MIPTPROJECT_WINDOW_H
