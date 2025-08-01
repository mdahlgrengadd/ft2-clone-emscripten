#pragma once

#include <stdint.h>
#include <stdbool.h>
#ifdef __EMSCRIPTEN__
#include <SDL.h>
#else
#include <SDL2/SDL.h>
#endif

typedef struct keyb_t
{
	uint8_t keyRepeat, keyPressed;
	bool ignoreCurrKeyUp, ignoreTextEditKey, numPadPlusPressed;
	bool keyModifierDown, leftCommandPressed, leftWinKeyDown;
	bool leftShiftPressed, leftCtrlPressed, leftAltPressed;
} keyb_t;

extern keyb_t keyb; // ft2_keyboard.c

int8_t scancodeKeyToNote(SDL_Scancode scancode);
void keyUpHandler(SDL_Scancode scancode, SDL_Keycode keycode);
void keyDownHandler(SDL_Scancode scancode, SDL_Keycode keycode, bool keyWasRepeated);
void readKeyModifiers(void);
