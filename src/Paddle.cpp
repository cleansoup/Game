#include "Paddle.h"


Paddle::Paddle() {
	SDL_Rect rectToDraw = {0, 0, 70, 70};
	SDL_RenderDrawRect(Global::getRenderer(), &rectToDraw);

}
Paddle::Paddle(int xPos, int yPos) {
	Paddle();

}

