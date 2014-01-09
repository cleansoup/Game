#include "Puck.h"

Puck::Puck(int x, int y, int velX, int velY) {
		position = Point2d(x, y);
		velocity = Velocity2d(velX, velY);
		mass = 1;
}
void Puck::hit(Force2d _force) {

}

