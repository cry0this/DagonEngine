#include <iostream>
#include "Renderer.h"

namespace DagEn
{
    Renderer::Renderer()
    {
        std::cout << "Created" << std::endl;
    }

    Renderer::~Renderer()
    {
        std::cout << "Destroyed" << std::endl;
    }
} // namespace DagEn
