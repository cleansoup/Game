#ifndef POINT2D_H_INCLUDED
#define POINT2D_H_INCLUDED
class Point2d {
	private:
		int x;
		int y;
	public:
		Point2d();	
		Point2d(int x, int y);
		int getX();
		int getY();
		void setPos(int x, int y);
};

#endif // POINT2D_H_INCLUDED
