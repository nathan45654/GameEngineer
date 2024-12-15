#include <SDL.h>
#include <SDL_image.h>

#include <stdio.h>
#include <iostream>


#include "Core.h"
#include "Globals.h"


Core::Core(int height, int width)
{
    _height = height;
    _width = width;

    // returns zero on success else non-zero
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        printf("error initializing SDL: %s\n", SDL_GetError());
    }

    window = SDL_CreateWindow("GAME", // creates a window
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        _height, _width, 0);
    if (window == NULL)
    {
        printf("window didn't start\n");
    }
    _window = window;

    // triggers the program that controls
    // your graphics hardware and sets flags
    Uint32 render_flags = SDL_RENDERER_ACCELERATED;

    // creates a renderer to render our images
    renderer = SDL_CreateRenderer(window, -1, render_flags);
    if (renderer == NULL)
    {
        printf("renderer didn't start\n");
    }
    _renderer = renderer;

    SDL_SetRenderDrawColor(_renderer, _background_red, _background_green, _background_blue, 255);
}

void Core::init()
{

}

void Core::run_game()
{
    int close = 0;

    // animation loop
    while (!close) {
        SDL_Event event;

        // Events management
        while (SDL_PollEvent(&event)) {

            switch (event.type) {

            case SDL_QUIT:
                close = 1;
                break;
            }
            
            update_physics();

            SDL_RenderClear(renderer);
            draw_graphics();
            SDL_RenderPresent(renderer);

            // calculates to 60 fps
            SDL_Delay(1000 / 60);
        }
    }
}

void Core::update_physics()
{

}
void Core::draw_graphics()
{

}


Core::~Core()
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
}