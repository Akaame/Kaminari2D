
#include "../Headers/SpriteComponent.h"

SpriteComponent::SpriteComponent(const char* file_name, SDL_Renderer* renderer, SDL_Rect rect)
{
    _renderer = renderer;
    SDL_Surface* _image = IMG_Load(file_name);
    Util::null_check(_image, "Load Image Error");
    _texture = SDL_CreateTextureFromSurface(_renderer, _image); // error here
    Util::null_check(_texture, "Load Image Error");
    _rect = rect;

}
SpriteComponent::~SpriteComponent(){

}
void SpriteComponent::draw_component()
{
    SDL_RenderCopy(_renderer, _texture, NULL, &_rect);
    SDL_RenderPresent(_renderer);  
    SDL_SetRenderDrawColor(_renderer, 0, 0, 0, 255);
    SDL_RenderClear(_renderer);
}

void SpriteComponent::offset_rect(int x, int y, int w, int h)
{
    _rect.x+=x;
    _rect.y+=y;
    _rect.w+=w;
    _rect.h+=h;
}


void SpriteComponent::set_target_object(GameObject* game_object)
{
    _target_object = game_object;
}