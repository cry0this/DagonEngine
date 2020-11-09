#include <iostream>
#include <SDL2/SDL.h>
#include <GLES3/gl3.h>

#include "Renderer.h"

Dagon::Renderer::Renderer()
{
    std::cout << "Created" << std::endl;
}

Dagon::Renderer::~Renderer()
{
    std::cout << "Destroyed" << std::endl;
}

void Dagon::Renderer::createWindow(int w, int h)
{
    SDL_InitSubSystem(SDL_INIT_VIDEO);

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_ES);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);

    window = SDL_CreateWindow("Dagon", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w, h, SDL_WINDOW_OPENGL);

    context = SDL_GL_CreateContext(window);

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

}

void Dagon::Renderer::updateWindow()
{
    glClear(GL_COLOR_BUFFER_BIT);
    SDL_GL_SwapWindow(window);
}