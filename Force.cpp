#include "Force.h"
Force2d::Force2d(Mass mass, int accX, int accY) {
	int forceX = mass * accX;
	int forceY = mass * accY;
	setForce(forceX, forceY);
}
int Force2d::getforceX() {
	return forceX;
}
int Force2d::getforceY() {
	return forceY;
}
void Force2d::setForce(int forceX, int forceY) {
	this->forceX = forceX;
	this->forceY = forceY;
}
