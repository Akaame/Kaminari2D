
#include "Headers/Game.h"

void keyboard_callback(GameObject game_object, SDL_Event event)
{
    switch(event.type)
    {
        case SDL_KEYDOWN:
        switch(event.key.keysym.sym)
        {
            case SDLK_UP:
            
            break;
            case SDLK_RIGHT:
            game_object.get_component<SpriteComponent>()->offset_rect(10,0,0,0);
            break;
        }
        break;
    }
}
int main(int argc, char** argv)
{
    Game game;
    game.initialize();

    GameObject player;
    SDL_Rect rect;
    rect.x = 50;
    rect.y = 50;
    rect.w = 50;
    rect.h = 50;
    std::cout << game.get_renderer() << std::endl;
    SpriteComponent* sprite = new SpriteComponent("../Resources/Walk (1).png", game.get_renderer(), rect);
    PlayerControllerComponent* pcc = new PlayerControllerComponent(keyboard_callback);
    player.bind_component<SpriteComponent>(sprite);
    player.bind_component<PlayerControllerComponent>(pcc);
    game.add_game_object(player);

    game.loop();
    return 0;
}