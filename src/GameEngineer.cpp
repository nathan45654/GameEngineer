// GameEngineerGraphics.cpp : Defines the entry point for the application.
//

#include "GameEngineer.h"

#include <SDL.h>
#include <SDL_main.h>

#include "core/Core.h"


int main(int argc, char* argv[])
{
    Core window(800, 600);

    window.run_game();
    // close SDL
    SDL_Quit();

    return 0;
}
