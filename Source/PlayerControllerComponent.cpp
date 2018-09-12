
#include "../Headers/PlayerControllerComponent.h"

PlayerControllerComponent::PlayerControllerComponent(void (*cb)(GameObject obj, SDL_Event ev))
{
    callback = cb;
}
PlayerControllerComponent::~PlayerControllerComponent()
{

}
void PlayerControllerComponent::signal_event(SDL_Event ev)
{
    callback(*_target_object, ev);
}

void PlayerControllerComponent::set_target_object(GameObject* game_object)
{
    _target_object = game_object;
}