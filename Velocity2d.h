#ifndef VELOCITY2D_H_INCLUDED
#define VELOCITY2D_H_INCLUDED
class Velocity2d {
	private:
		int velX;
		int velY;
	public:
		Velocity2d(int velX, int velY);
		int getVelX();
		int getVelY();
		void setVel(int velX, int velY);
};

#endif // VELOCITY2D_H_INCLUDED
