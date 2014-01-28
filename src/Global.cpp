#include "Global.h"

SDL_Renderer* Global::s_renderer = NULL;
SDL_Window* Global::s_window = NULL;

SDL_Renderer* Global::getRenderer(){
	if(s_renderer == NULL){
		s_renderer = SDL_CreateRenderer( Global::getWindow(), -1, SDL_RENDERER_ACCELERATED );
	}
	return s_renderer;
}

SDL_Window* Global::getWindow(){
	if(s_window == NULL){
		s_window = SDL_CreateWindow("Pong", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
	 SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	}
	return s_window;
}

