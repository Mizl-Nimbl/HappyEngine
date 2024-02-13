#ifndef fonts_hpp
#define fonts_hpp

#include "../game.hpp"
#include "SDL2/SDL.h"
#include <string>
#include <array>
#include "GL/gl.h"
#include <GL/glext.h>
#include <SDL2/SDL.h>

class Font1
{
public:
    void word(std::string &word, float pos[2], float scale)
    {
        float originalpos[2] = {pos[0], pos[1]};
        int linesbroken = 0;
        for(float count = 0; count <= word.length(); count++) 
        {
            switch (word[count])
            {
                case 'a':
                    a(pos, scale);
                    break;
                case 'b':
                    b(pos, scale);
                    break;
                case 'c':
                    c(pos, scale);
                    break;
                case 'd':
                    d(pos, scale);
                    break;
                case 'e':
                    e(pos, scale);
                    break;
                case 'f':
                    f(pos, scale);
                    break;
                case 'g':
                    g(pos, scale);
                    break;
                case 'h':
                    h(pos, scale);
                    break;
                case 'i':
                    i(pos, scale);
                    break;
                case 'j':
                    j(pos, scale);
                    break;
                case 'k':
                    k(pos, scale);
                    break;
                case 'l':
                    l(pos, scale);
                    break;
                case 'm':
                    m(pos, scale);
                    break;
                case 'n':
                    n(pos, scale);
                    break;
                case 'o':
                    o(pos, scale);
                    break;
                case 'p':
                    p(pos, scale);
                    break;
                case 'q':
                    q(pos, scale);
                    break;
                case 'r':
                    r(pos, scale);
                    break;
                case 's':
                    s(pos, scale);
                    break;
                case 't':
                    t(pos, scale);
                    break;
                case 'u':
                    u(pos, scale);
                    break;
                case 'v':
                    v(pos, scale);
                    break;
                case 'w':
                    w(pos, scale);
                    break;
                case 'x':
                    x(pos, scale);
                    break;
                case 'y':
                    y(pos, scale);
                    break;
                case 'z':
                    z(pos, scale);
                    break;
                case ' ':
                    _(pos, scale);
                    break;
                case '\n':
                    linebreak(pos, scale, originalpos, linesbroken);
                    break;
                default:
                    break;
            }
            pos[0] = pos[0] + scale * 0.6;
        }
    }
    void a(float pos[2], float scale)
    {
        glBegin(GL_LINES);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0], pos[1] + scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0], pos[1] + scale * 0.5);
        glVertex2f(pos[0] + scale * 0.125, pos[1]);
        glVertex2f(pos[0] - scale * 0.125, pos[1]);
        glEnd();
    }
    void b(float pos[2], float scale)
    {
        glBegin(GL_LINE_LOOP);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] - scale * 0.25);
        glVertex2f(pos[0] - scale * 0.25, pos[1]);
        glVertex2f(pos[0] + scale * 0.25, pos[1] + scale * 0.25);
        glEnd();
    }
    void c(float pos[2], float scale)
    {
        glBegin(GL_LINE_STRIP);
        glColor3f(0,1,0);
        glVertex2f(pos[0] + scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1]);
        glVertex2f(pos[0] + scale * 0.25, pos[1] - scale * 0.5);
        glEnd();
    }
    void d(float pos[2], float scale)
    {
        glBegin(GL_LINE_LOOP);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1]);
        glVertex2f(pos[0] - scale * 0.25, pos[1] - scale * 0.5);
        glEnd();
    }
    void e(float pos[2], float scale)
    {
        glBegin(GL_LINES);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1]);
        glVertex2f(pos[0] + scale * 0.25, pos[1]);
        glEnd();
    }
    void f(float pos[2], float scale)
    {
        glBegin(GL_LINES);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1]);
        glVertex2f(pos[0] + scale * 0.25, pos[1]);
        glEnd();
    }
    void g(float pos[2], float scale)
    {
        glBegin(GL_LINE_STRIP);
        glColor3f(0,1,0);
        glVertex2f(pos[0], pos[1] + scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1]);
        glVertex2f(pos[0], pos[1] - scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1]);
        glVertex2f(pos[0], pos[1]);
        glEnd();
    }
    void h(float pos[2], float scale)
    {
        glBegin(GL_LINES);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1]);
        glVertex2f(pos[0] + scale * 0.25, pos[1]);
        glVertex2f(pos[0] + scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] - scale * 0.5);
        glEnd();
    }
    void i(float pos[2], float scale)
    {
        glBegin(GL_LINES);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0], pos[1] + scale * 0.5);
        glVertex2f(pos[0], pos[1] - scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] - scale * 0.5);
        glEnd();
    }
    void j(float pos[2], float scale)
    {
        glBegin(GL_LINES);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0], pos[1] + scale * 0.5);
        glVertex2f(pos[0], pos[1] - scale * 0.5);
        glVertex2f(pos[0], pos[1] - scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1] - scale * 0.5);
        glEnd();
    }
    void k(float pos[2], float scale)
    {
        glBegin(GL_LINE_STRIP);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1]);
        glVertex2f(pos[0] + scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1]);
        glVertex2f(pos[0] + scale * 0.25, pos[1] - scale * 0.5);
        glEnd();
    }
    void l(float pos[2], float scale)
    {
        glBegin(GL_LINE_STRIP);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] - scale * 0.5);
        glEnd();
    }
    void m(float pos[2], float scale)
    {
        glBegin(GL_LINE_STRIP);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0] - scale * 0.125, pos[1] + scale * 0.5);
        glVertex2f(pos[0], pos[1] - scale * 0.5);
        glVertex2f(pos[0] + scale * 0.125, pos[1] + scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] - scale * 0.5);
        glEnd();
    }
    void n(float pos[2], float scale)
    {
        glBegin(GL_LINE_STRIP);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] + scale * 0.5);
        glEnd();
    }
    void o(float pos[2], float scale)
    {
        glBegin(GL_LINE_LOOP);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1]);
        glVertex2f(pos[0], pos[1] + scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1]);
        glVertex2f(pos[0], pos[1] - scale * 0.5);
        glEnd();
    }
    void p(float pos[2], float scale)
    {
        glBegin(GL_LINE_STRIP);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] + scale * 0.25);
        glVertex2f(pos[0] - scale * 0.25, pos[1]);
        glEnd();
    }
    void q(float pos[2], float scale)
    {
        glBegin(GL_LINE_STRIP);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1]);
        glVertex2f(pos[0], pos[1] + scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1]);
        glVertex2f(pos[0], pos[1] - scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1]);
        glVertex2f(pos[0], pos[1] - scale * 0.5);
        glVertex2f(pos[0] + scale * 0.125, pos[1] - scale * 0.25);
        glVertex2f(pos[0], pos[1]);
        glVertex2f(pos[0] + scale * 0.25, pos[1] - scale * 0.5);
        glEnd();
    }
    void r(float pos[2], float scale)
    {
        glBegin(GL_LINE_STRIP);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] + scale * 0.25);
        glVertex2f(pos[0] - scale * 0.25, pos[1]);
        glVertex2f(pos[0] + scale * 0.25, pos[1] - scale * 0.5);
        glEnd();
    }
    void s(float pos[2], float scale)
    {
        glBegin(GL_LINE_STRIP);
        glColor3f(0,1,0);
        glVertex2f(pos[0] + scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.25);
        glVertex2f(pos[0] + scale * 0.25, pos[1] - scale * 0.25);
        glVertex2f(pos[0] - scale * 0.25, pos[1] - scale * 0.5);
        glEnd();
    }
    void t(float pos[2], float scale)
    {
        glBegin(GL_LINE_STRIP);
        glColor3f(0,1,0);
        glVertex2f(pos[0], pos[1] - scale * 0.5);
        glVertex2f(pos[0], pos[1] + scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] + scale * 0.5);
        glEnd();
    }
    void u(float pos[2], float scale)
    {
        glBegin(GL_LINE_STRIP);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1]);
        glVertex2f(pos[0], pos[1] - scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1]);
        glVertex2f(pos[0] + scale * 0.25, pos[1] + scale * 0.5);
        glEnd();
    }
    void v(float pos[2], float scale)
    {
        glBegin(GL_LINE_STRIP);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0], pos[1] - scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] + scale * 0.5);
        glEnd();
    }
    void w(float pos[2], float scale)
    {
        glBegin(GL_LINE_STRIP);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] - scale * 0.125, pos[1] - scale * 0.5);
        glVertex2f(pos[0], pos[1] + scale * 0.5);
        glVertex2f(pos[0] + scale * 0.125, pos[1] - scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] + scale * 0.5);
        glEnd();
    }
    void x(float pos[2], float scale)
    {
        glBegin(GL_LINES);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] + scale * 0.5);
        glEnd();
    }
    void y(float pos[2], float scale)
    {
        glBegin(GL_LINE_STRIP);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0], pos[1]);
        glVertex2f(pos[0] - scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] + scale * 0.5);
        glEnd();
    }
    void z(float pos[2], float scale)
    {
        glBegin(GL_LINE_STRIP);
        glColor3f(0,1,0);
        glVertex2f(pos[0] - scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] + scale * 0.5);
        glVertex2f(pos[0] - scale * 0.25, pos[1] - scale * 0.5);
        glVertex2f(pos[0] + scale * 0.25, pos[1] - scale * 0.5);
        glEnd();
    }
    void _(float pos[2], float scale)
    {
        // Space
    }
    void linebreak(float pos[2], float scale, float originalpos[2], int &linesbroken)
    {
        pos[0] = originalpos[0] - scale * 0.6;
        pos[1] = originalpos[1] - scale * 1.2 * (linesbroken + 1);
        linesbroken++;
    }
};

#endif /* fonts_hpp */