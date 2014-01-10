#include <SDL.h>
#include <stdio.h>
#define _main 	_SDL_main
#include "main.h"

const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 720;

/**
 * SDL_main used as main as SDL requires.
 * Do NOT change the function signature to maintain SDL compatability
 * Handles initialization and destruction of game resources.
 */
int main(int argc, char* args[]) {
	SDL_Window* window = NULL;

	//Initialize standard SDL modules plus video
	if(SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL initialization error: %s\n", SDL_GetError());
	}

	else
	{
		printf("SDL loaded properly\nSystem Detected: %s\n", SDL_GetPlatform());
		window = SDL_CreateWindow("Pong", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
			 SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

		if(window == NULL)
		{
			printf("Window creation error: %s\n", SDL_GetError());
		}
		else
		{
			game_loop(window);
		}
	}

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}

/**
 * Handles game loop until game termination.
 */
void game_loop(SDL_Window* window) {

	SDL_Surface* screenSurface = SDL_GetWindowSurface(window);
	bool gameOn = true;
	SDL_Event e;
	while(gameOn)
	{
			while (SDL_PollEvent(&e)){
				if(e.type == SDL_QUIT)
					gameOn = false;
				if(e.type == SDL_KEYDOWN)
					gameOn = false;
				if(e.type == SDL_MOUSEBUTTONDOWN)
					gameOn = false;
			}
			//Fill the surface white
			SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
			//Update the surface
			SDL_UpdateWindowSurface(window);

	}

}

void game_init(SDL_Surface* screenSurface) {
	const int xStart = 100;
	const int yStart = 100;
	const int xIniVel = 0;
	const int yIniVel = 0; 

	Puck aPuck(xStart, yStart, xIniVel, yIniVel);
}
void clear(SDL_Surface* screenSurface) {
	game_init(screenSurface);
}

