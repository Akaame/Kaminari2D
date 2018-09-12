
#ifndef COMPONENT_H
#define COMPONENT_H

#include <SDL.h>
#include "Util.h"
class Component{
    public:
    const char* COMPONENT_NAME;
    Component();
    Component(const Component&);
    virtual ~Component();
};

#endif