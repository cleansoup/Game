#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_H_INCLUDED

#include "SDL.h"

class Global{
	public:
		static const int SCREEN_WIDTH = 1280;
		static const int SCREEN_HEIGHT = 720;

		static SDL_Renderer* getRenderer();
		static SDL_Window* getWindow();



	private:
		static SDL_Renderer* s_renderer;
		static SDL_Window* s_window;


};
#endif //GLOBAL_H_INCLUDED
