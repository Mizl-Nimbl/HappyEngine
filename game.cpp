
#include "game.hpp"
#include "Devices/devices.hpp"
#include "Resources/resources.hpp"

Game::Game(){};
Game::~Game(){};

Init i;
Game g;
Cursor c;
Font1 f;

void Init::init(const char *title, int xpos, int ypos, int width, int height, Uint32 flags)
{
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        std::cout << "Subsystems Initialised" << std::endl;
        isRunning = true;
    } 
    else 
    {
        isRunning = false;
    }
    i.window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
    i.gl = SDL_GL_CreateContext(i.window);
    if(i.window)
    {
        std::cout << "Window created" << std::endl;
    }
    if(i.gl)
    {
        std::cout << "OpenGL instance created" << std::endl;
    }
    setup(width, height);
    /*
    loadScript("../scripts/hello.lua");
    loadScript("../scripts/character/sprite.lua");
    loadScript("../scripts/character/hitbox.lua");
    */
}

void Init::pushVariablesToLua()
{
    /*
    loadBool("Silly", true);
    */
}

void Init::handleEvents()
{
    SDL_Event event;
    SDL_PollEvent(&event);

    if (event.type == SDL_QUIT)
    {
        isRunning = false;
    }

    SDL_PumpEvents();
}

void Game::update()
{
    /*int ticks = SDL_GetTicks();
    if(ticks % 2 == 0){}*/
    c.coords = c.getCursorCoords(i.window);
}

void Game::render()
{
    float topleft[2] = {-0.5, 0.5};
    std::string a = "abcde";
    f.word(a, topleft, 0.2f);
    
    c.drawCursor(c.coords); 
    SDL_GL_SwapWindow(i.window);
}

void Game::flush()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glFlush();
}

void Game::clean()
{
    SDL_DestroyWindow(i.window);
    SDL_Quit();
    lua_close(i.L);
    std::cout << "Game Cleaned" << std::endl;
}
