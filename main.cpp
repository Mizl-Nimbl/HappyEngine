#include <iostream>
#include "SDL2/SDL.h"
#include "game.cpp"

Init *init = nullptr;
Game *game = nullptr;

int main(int argc, char * argv[])
{
    Uint32 flags;
    game = new Game();
    init = new Init();
    if(init->fullscreen == 1)
    {
        flags = SDL_WINDOW_FULLSCREEN | SDL_WINDOW_OPENGL;
    }
    else if (init->fullscreen == 0)
    {
        flags = SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL;
    }
    init->init("HappyEngine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1920, 1080, flags);
    while(init->running())
    {
        init->pushVariablesToLua();
        init->handleEvents();
        game->update();
        game->render();
        SDL_Delay(16);
        game->flush();
    }
    game->clean();
    return 0;
}