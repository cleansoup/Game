#include "Velocity2d.h"
Velocity2d::Velocity2d(int velX, int velY) {
    setVel(velX, velY);
}
int Velocity2d::getVelX() {
    return velX;
}
int Velocity2d::getVelY() {
    return velY;
}
void Velocity2d::setVel(int velX, int velY) {
    this->velX = velX;
    this->velY = velY;
}

