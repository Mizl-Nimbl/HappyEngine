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

    float *getCursorCoords()
    {
        SDL_Event mouse;
        SDL_PollEvent(&mouse);
        float* coords = new float[2];
        coords[0] = mouse.motion.x;
        coords[1] = mouse.motion.y;
        std::cout << coords << std::endl;
        return coords;
    }
    void drawCursor(float coords[2])
    {
        glBegin(GL_TRIANGLES);
        glColor3f(1,1,1);
        glVertex2f(coords[0] - 0.005f, -coords[1] + 0.015f);
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