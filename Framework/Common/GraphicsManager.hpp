#pragma once

#include "IRuntimeModule.hpp"

namespace My {
    Interface GraphicsManager : implements IRuntimeModule {
    public:
        virtual ~GraphicsManager() {}
    };
}