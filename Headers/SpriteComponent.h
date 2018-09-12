
#ifndef SPRITE_COMPONENT_H
#define SPRITE_COMPONENT_H

#include <SDL.h>
#include "SDL/SDL_image.h"
#include "../Headers/Component.h"
#include "../Headers/GameObject.h"

class SpriteComponent: public Component
{
private:
    SDL_Texture* _texture;
    SDL_Rect _rect;
    SDL_Renderer* _renderer;
    GameObject* _target_object;
public:
    SpriteComponent(const char*, SDL_Renderer*, SDL_Rect);
    ~SpriteComponent();
    
    void draw_component();
    void offset_rect(int, int, int ,int);
    void set_target_object(GameObject*);
};

#endif