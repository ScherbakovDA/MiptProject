//
// Created by denis on 21.05.18.
//

#ifndef MIPTPROJECT_COMPONENTS_H
#define MIPTPROJECT_COMPONENTS_H

#include "Libraries.h"
#include "Dot.h"

class GameObject;

class AbstractClass
{
public:
    GameObject* gameObject;
    const char& Type;
    virtual void make() = 0;
    virtual ~AbstractClass();
};

class RigidBody : AbstractClass
{
public:
    float mass;
    std::pair<float, float > speed;
    void make();
    RigidBody(GameObject* gameObject);
    ~RigidBody();
};

class StaticBodies : AbstractClass
{
public:
    std::string TextureName;
    std::vector<Dot> SetSpriteCoordinate();
    StaticBodies(GameObject* gameObject);
    ~StaticBodies();
    void make();
    void Draw();
    Dot SetSpriteCenter();
};

class GameObject
{
public:
    std::vector<AbstractClass*> ComponentsList;

    void AddComponent();

    template<typename T>

    T& GetComponent();

};
#endif //MIPTPROJECT_COMPONENTS_H
