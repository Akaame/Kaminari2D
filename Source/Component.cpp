#include "../Headers/Component.h"

Component::Component(){}
Component::Component(const Component& other){
    COMPONENT_NAME = other.COMPONENT_NAME;
}
Component::~Component(){}