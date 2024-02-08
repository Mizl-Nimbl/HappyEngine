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
    void pushVariablesToLua();
    bool isRunning;
    int fullscreen = 1;
    SDL_Window *window;
    SDL_GLContext gl;
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
    //Varaible Loading
    void loadNum(const char* varName, int myNum)
    {
        lua_pushinteger(L, myNum);
        lua_setglobal(L, varName);
    }
    void loadFloat(const char* varName, float myNum)
    {
        lua_pushnumber(L, myNum);
        lua_setglobal(L, varName);
    }
    void loadDouble(const char* varName, double myNum)
    {
        lua_pushnumber(L, myNum);
        lua_setglobal(L, varName);
    }
    void loadString(const char* varName, const char* myNum)
    {
        lua_pushstring(L, myNum);
        lua_setglobal(L, varName);
    }
    void loadBool(const char* varName, bool myNum)
    {
        lua_pushboolean(L, myNum);
        lua_setglobal(L, varName);
    }
    void setup(int width, int height)
    {
        glClearColor(0.0, 0.0, 0.0, 1.0);
        glLoadIdentity();
        glViewport(0, 0, width, height);
        SDL_GL_SetSwapInterval(1);
        SDL_ShowCursor(0);
        glClearDepth(1.0f);         
        glMatrixMode(GL_MODELVIEW_MATRIX);
        glDepthFunc(GL_LEQUAL);
        glShadeModel(GL_SMOOTH);
        glEnable(GL_NORMALIZE);
        glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST); 
        SDL_SetRelativeMouseMode(SDL_FALSE);
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