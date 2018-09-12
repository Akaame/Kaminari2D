
#include "../Headers/Game.h"

Game::Game()
{
    _screen_width = 640;
    _screen_height = 480;
    _window = NULL;
    _curr_game_state = GameState::PLAYING;   
    
}

Game::~Game()
{

}

void Game::initialize()
{
    SDL_Init(SDL_INIT_EVERYTHING);
    _window = SDL_CreateWindow("Viz", 0, 0, _screen_width, _screen_height, 0);
    Util::null_check(_window, "Could not create window");
    _renderer = SDL_CreateRenderer(_window,-1, SDL_RENDERER_ACCELERATED);
    Util::null_check(_renderer, "Could not create renderer");
    SDL_SetRenderDrawColor(_renderer, 0, 0, 0, 255);
    SDL_RenderClear(_renderer);
    
}

void Game::loop()
{
    while(_curr_game_state != GameState::EXIT)
    {
        SDL_Event event;
        // process events in an infinite loop
        while(SDL_PollEvent(&event))
        {
            switch(event.type)
            {
                case SDL_QUIT:
                _curr_game_state = GameState::EXIT;
                break;
                case SDL_MOUSEBUTTONDOWN:
                
                break;
            }
            for(int i = 0;i<game_objects.size();i++)
            {
                game_objects[i].get_component<PlayerControllerComponent>()->signal_event(event);
            }
        }
        for(int i = 0;i<game_objects.size();i++)
        {
            game_objects[i].get_component<SpriteComponent>()->draw_component();
        }
    }
}

SDL_Renderer* Game::get_renderer()
{
    return _renderer;
}

void Game::add_game_object(GameObject game_object)
{
    game_objects.push_back(game_object);
}