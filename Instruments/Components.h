#ifndef MIPTPROJECT_COMPONENTS_H
#define MIPTPROJECT_COMPONENTS_H

#include "Libraries.h"
#include "Dot.h"

class GameObject
{
public:

    void AddComponent();

    template<typename T>

    T* GetComponent();

};

class AbstractClass
{
public:
    GameObject* gameObject;
    const char* Type;
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


#endif //MIPTPROJECT_COMPONENTS_H
