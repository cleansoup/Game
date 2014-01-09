#ifndef FORCE_H_INCLUDED
#define FORCE_H_INCLUDED
typedef int Mass;
class Force2d {
	private:
		int forceX;
		int forceY;
	public:
		Force2d(Mass mass, int accX, int accY);
		int getforceX();
		int getforceY();
		void setForce(int forceX, int forceY);
};


#endif // FORCE_H_INCLUDED
