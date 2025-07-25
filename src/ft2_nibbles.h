#pragma once

#include <stdint.h>
#include <stdbool.h>
#ifdef __EMSCRIPTEN__
#include <SDL.h>
#else
#include <SDL2/SDL.h>
#endif

void nibblesKeyAdministrator(SDL_Scancode scancode);
void moveNibblesPlayers(void);
void showNibblesScreen(void);
void hideNibblesScreen(void);
void exitNibblesScreen(void);
void pbNibbles(void);
void nibblesPlay(void);
void nibblesHelp(void);
void nibblesHighScore(void);
void nibblesExit(void);
void nibblesSet1Player(void);
void nibblesSet2Players(void);
void nibblesSetNovice(void);
void nibblesSetAverage(void);
void nibblesSetPro(void);
void nibblesSetTriton(void);
void nibblesToggleSurround(void);
void nibblesToggleGrid(void);
void nibblesToggleWrap(void);
bool testNibblesCheatCodes(SDL_Keycode keycode);
