#ifndef game_hpp
#define game_hpp
#define GL_GLEXT_PROTOTYPES

#include "SDL2/SDL.h"
#include "GL/gl.h"
#include <GL/glext.h>
#include "GL/glu.h"
#include <math.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <lua5.4/lua.h>
#include <lua5.4/lualib.h>
#include <lua5.4/lauxlib.h>

class Init {
public:
    void init(const char* title, int xpos, int ypos, int width, int height, Uint32 flags);
    void handleEvents();
    bool running() { return isRunning; }
    bool isRunning;
    int fullscreen = 1;
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_GLContext gl;
    GLuint drawingbuffer;
    lua_State* L = luaL_newstate();
    void loadScript(const char* script)
    {
        luaL_openlibs(L);
        luaL_dofile(L, script);
    }
    void loadFunction(const char* function)
    {
        lua_getglobal(L, function);
        lua_pcall(L, 0, 0, 0);
    }
private:
};

class Game {
public:
    Game();
    ~Game();

    void update();
    void render();
    void clean();
    void flush();

private:
};

#endif