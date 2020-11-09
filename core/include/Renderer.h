#ifndef __RENDERER_H__
#define __RENDERER_H__

#include <SDL2/SDL.h>

namespace Dagon
{
    class Renderer
    {
    private:
        SDL_Window *window;
        SDL_GLContext context;

    public:
        Renderer();
        ~Renderer();
        void createWindow(int w, int h);
        void updateWindow();
    };
} // namespace Dagon

#endif // __RENDERER_H__