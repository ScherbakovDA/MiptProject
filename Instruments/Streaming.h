
#ifndef MIPTPROJECT_STREAMING_H
#define MIPTPROJECT_STREAMING_H

#include "Libraries.h"
#include "Components.h"
#include "../Rendering/Window.h"

class Streaming
{
public:

    sf::Clock clock;
    sf::Event event;
    float CurrentTime;
    float LastTime;
    std::mutex firstStream;
    std::mutex secondStream;

    std::vector<GameObject*> GameObjects;
    void AddObject(GameObject* object);

    static Streaming* GetInstance();

private:

    Streaming();

};


#endif //MIPTPROJECT_STREAMING_H
