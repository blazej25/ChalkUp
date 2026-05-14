//
// Created by vincent on 5/13/26.
//

#include "Renderer.h"
#include <iostream>

Renderer::Renderer(const std::string& windowTitle, int windowWidth, int windowHeight) {
    if (SDL_Init(SDL_INIT_VIDEO) > 0) {
        std::cerr << "SDL init failed: " << SDL_GetError() << std::endl;
    }

    window = SDL_CreateWindow(windowTitle.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, windowWidth, windowHeight, SDL_WINDOW_RESIZABLE);

    // ACCELERATED - high performance, uses gpu
    // PRESENTVSYNC - synchronizes renderer with refresh rate
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
}

Renderer::~Renderer() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void Renderer::clear() {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
}

void Renderer::render() {
    SDL_RenderPresent(renderer);
}

SDL_Renderer* Renderer::getRenderer() {
    return renderer;
}