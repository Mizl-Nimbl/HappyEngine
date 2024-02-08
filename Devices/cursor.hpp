#ifndef cursor_hpp
#define cursor_hpp

#include "../game.hpp"
#include "SDL2/SDL.h"
#include <string>
#include <array>
#include "GL/gl.h"
#include <GL/glext.h>
#include <SDL2/SDL.h>

class Cursor
{
public:
    float *coords = new float[2];
    int x, y;
    int w, h;

    float *getCursorCoords(SDL_Window *window)
    {
        SDL_GetGlobalMouseState(&x, &y);
        SDL_GetWindowSize(window, &w, &h);
        coords[0] = ((static_cast<float>(x) / static_cast<float>(w)) - 0.5f) * 2.0f;
        coords[1] = ((static_cast<float>(y) / static_cast<float>(h)) - 0.5f) * 2.0f;
        return coords;
    }
    void drawCursor(float coords[2])
    {
        glBegin(GL_TRIANGLES);
        glColor3f(1,1,1);
        glVertex2f(coords[0] - 0.004f, -coords[1] + 0.015f);
        glVertex2f(coords[0] - 0.002f, -coords[1] - 0.030f);
        glVertex2f(coords[0] + 0.015f, -coords[1] - 0.020f);
        glEnd();
    };
    void drawCrosshair()
    {
        glBegin(GL_LINES);
        glColor3f(1,1,1);
        glVertex2f(0, -0.019);
        glVertex2f(0, 0.019);
        glVertex2f(-0.011, 0);
        glVertex2f(0.011, 0);
        glEnd();
    };
};

#endif /*cursor_hpp*/