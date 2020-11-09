#include <SDL2/SDL.h>
#include "Event.h"

Dagon::Event::Event()
{
    SDL_InitSubSystem(SDL_INIT_EVENTS);
}

Dagon::Event::~Event() {}

SDL_Event *Dagon::Event::get()
{
    SDL_PollEvent(&event);
    return &event;
}