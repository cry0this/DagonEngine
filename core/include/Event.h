#ifndef __EVENT_H__
#define __EVENT_H__

#include <SDL2/SDL.h>

namespace Dagon
{
    class Event
    {
    private:
        SDL_Event event;

    public:
        Event();
        ~Event();
        SDL_Event *get();
    };
} // namespace Dagon

#endif // __EVENT_H__