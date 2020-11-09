#include <SDL2/SDL.h>
#include "Renderer.h"
#include "Event.h"

int main(int argc, char const *argv[])
{
    Dagon::Renderer renderer;
    renderer.createWindow(800, 600);

    Dagon::Event event;
    bool running {true};

    while (running)
    {
        if (event.get()->type == SDL_QUIT)
        {
                running = false;
        }
        renderer.updateWindow();
    }

    return 0;
}
