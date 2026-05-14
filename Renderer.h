//
// Created by vincent on 5/13/26.
//

#ifndef CHALKUP_RENDERER_H
#define CHALKUP_RENDERER_H

#include <SDL2/SDL.h>
#include <string>

class Renderer {
public:

    // constructor
    Renderer(const std::string& windowTitle, int windowWidth, int windowHeight);

    // deconstructor
    ~Renderer();

    void clear();
    void render();

    SDL_Renderer* getRenderer();

private:
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;

};

#endif //CHALKUP_RENDERER_H
