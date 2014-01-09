#include "Point2d.h"
Point2d::Point2d() {
	
}
Point2d::Point2d(int x, int y) {
	setPos(x, y);
}
int Point2d::getX() {
	return x;
}
int Point2d::getY() {
    return y;
}
void Point2d::setPos(int x, int y) {
    this->x = x;
    this->y = y;
}
