#include "Point2d.h"
#include "Velocity2d.h"
#include "Force2d.h"
#include "Puck.h"
Puck::Puck(int x, int y, int velX, int velY) {
		Point2d position (x, y);
		Velocity2d velocity (velX, velY);
		mass = 1;
}
void Puck::hit(Force2d _force) {

}

