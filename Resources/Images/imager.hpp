#ifndef imager_hpp
#define imager_hpp

#include "SDL2/SDL.h"
#include <string>
#include <array>
#include <vector>
#include "GL/gl.h"
#include <GL/glext.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <filesystem>
#include "../../game.hpp"
#include "../../extern.hpp"

class Imager
{
public:
    std::vector<GLuint> loadImages()
    {
        std::vector<GLuint> textures;
        for (const auto & entry : std::filesystem::directory_iterator("../Textures/"))
        {
            std::string path = entry.path();
            std::string extension = path.substr(path.find_last_of(".") + 1);
            if(extension == "jpg")
            {
                std::cout << path << std::endl;
                textures.push_back(loadImage(path.c_str()));
            }
        }
        return textures;
    }
    void drawImages(SDL_Window *window, GLuint texture)
    {
        drawImage(window, texture, 0, 0, 1920, 1080, 0, 0);
    }

private:

    GLuint loadImage(const char* path)
    {
        SDL_Surface* temp = IMG_Load(path);
        GLuint texture;
        glGenTextures(1, &texture);
        glBindTexture(GL_TEXTURE_2D, texture);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, temp->w, temp->h, 0, GL_RGB, GL_UNSIGNED_BYTE, temp->pixels);
        SDL_FreeSurface(temp);
        return texture;
    }
    void drawImage(SDL_Window *window, GLuint texture, int x, int y, int w, int h, float pitch, float yaw)
    {
        int width, height;
        SDL_GetWindowSize(window, &width, &height);
        float wnormalized = w / width;
        float hnormalized = w / width;
        glEnable(GL_TEXTURE_2D);
        glBindTexture(GL_TEXTURE_2D, texture);
        glPushMatrix();
        glTranslatef(x + wnormalized / 2, y + hnormalized / 2, 0);
        glRotatef(pitch, 1, 0, 0);
        glRotatef(yaw, 0, 1, 0);
        glTranslatef(-wnormalized / 2, -hnormalized / 2, 0);
        glBegin(GL_QUADS);
        glTexCoord2f(0, 0); glVertex2f(0, 0);
        glTexCoord2f(1, 0); glVertex2f(wnormalized, 0);
        glTexCoord2f(1, 1); glVertex2f(wnormalized, hnormalized);
        glTexCoord2f(0, 1); glVertex2f(0, hnormalized);
        glEnd();
        glPopMatrix();
        glDisable(GL_TEXTURE_2D);
    }
};

#endif /* imager_hpp */