
#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include <map>
#include "Component.h"
#include <string>
#include <iostream>
#include <typeinfo>

class GameObject{

std::map<std::string, Component*> components;
public:
    
    template <class T>
    void bind_component(T* comp)
    {
        components[typeid(T).name()] = comp;
        comp->set_target_object(this);
    }
    template <class T>
    T* get_component()
    {
        T* component = dynamic_cast<T*>(components[typeid(T).name()]);
        return component; 
    }
};

#endif