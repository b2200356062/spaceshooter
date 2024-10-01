
#include <iostream>
#include "engine.h"

int main()
{
    Engine* game = new Engine();

    game->init();

    while (!WindowShouldClose())
    {
        // handle input
        game->handleInputEvents();

        // update
        game->update();

        // draw
        game->draw();
    }


    game->clean();

    delete game;
    game = nullptr;

    return EXIT_SUCCESS;

}
