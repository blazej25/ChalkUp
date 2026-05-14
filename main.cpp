#include <iostream>

#include "Renderer.h"

int main() {
    Renderer* gameRenderer = new Renderer("Chalk Up", 800, 600);

    bool isRunning = true;
    SDL_Event event;
    while (isRunning) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                isRunning = false;
            }
        }
        // clear screen
        gameRenderer->clear();

        // changes in frame

        // show frame
        gameRenderer->render();
    }
    return 0;
}