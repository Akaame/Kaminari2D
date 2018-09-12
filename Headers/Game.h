
#include <iostream>
#include "GameState.h"
#include "GameObject.h"
#include "Components.h"
#include <vector>

class Game
{
private:
    int _screen_width;
    int _screen_height;
    SDL_Window* _window;
    SDL_Renderer* _renderer;
    GameState _curr_game_state;
    std::vector<GameObject> game_objects;

public:
    Game();
    ~Game();

    SDL_Renderer* get_renderer();
    void initialize();
    void loop();
    void add_game_object(GameObject);
    
};