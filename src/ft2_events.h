#pragma once

#ifdef __EMSCRIPTEN__
#include <SDL.h>
#else
#include <SDL2/SDL.h>
#endif
#include <stdint.h>
#include <stdbool.h>

enum
{
	EVENT_NONE = 0,
	EVENT_LOADMUSIC_ARGV = 1,
	EVENT_LOADMUSIC_DRAGNDROP = 2,
	EVENT_LOADMUSIC_DISKOP = 3,
};

void handleThreadEvents(void);
void readInput(void);
void handleEvents(void);
void setupCrashHandler(void);
void handleWaitVblQuirk(SDL_Event *event);
#ifdef _WIN32
bool handleSingleInstancing(int32_t argc, char **argv);
void closeSingleInstancing(void);
#endif
