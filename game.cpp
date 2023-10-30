
#include "game.hpp"
#include "scripts/hello.lua"

Game::Game(){};
Game::~Game(){};

Init i;
Game g;

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
    glGenBuffers(1, &i.drawingbuffer);
    glBindBuffer(GL_FRAMEBUFFER, i.drawingbuffer);
}

void Init::handleEvents()
{
    SDL_Event event;
    SDL_PollEvent(&event);

    // Check for the quit event.
    if (event.type == SDL_QUIT)
    {
        isRunning = false;
    }
    //handle inputs
}

void Game::update()
{
    std::cout << GetHello() << std::endl;
}

void Game::render()
{
    //add things to render
    SDL_GL_SwapWindow(i.window);
}

void Game::flush()
{
    glFlush();
}

void Game::clean()
{
    SDL_DestroyWindow(i.window);
    SDL_DestroyRenderer(i.renderer);
    SDL_Quit();
    std::cout << "Game Cleaned" << std::endl;
}
