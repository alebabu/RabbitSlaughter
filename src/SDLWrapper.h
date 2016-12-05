//#define WINDOWS
#define MAC_OS

#ifndef SDLWRAPPER_H
#define SDLWRAPPER_H

#ifdef WINDOWS
#include <SDL.h>
#endif

#ifdef MAC_OS
#include <SDL2/SDL.h>
#endif


#endif //SDLWRAPPER_H
