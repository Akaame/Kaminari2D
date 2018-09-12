

#ifndef PLAYER_CONTROLLER_COMPONENT_H
#define PLAYER_CONTROLLER_COMPONENT_H

#include "../Headers/Component.h"
#include "../Headers/GameObject.h"

class PlayerControllerComponent: public Component
{

private:
    void (*callback)(GameObject, SDL_Event);
    GameObject* _target_object;
public:
    PlayerControllerComponent(void (*callback)(GameObject, SDL_Event));
    ~PlayerControllerComponent();
    void signal_event(SDL_Event);
    void set_target_object(GameObject*);
};

#endif