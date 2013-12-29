class MovementVector2d {
	private:
		int radius;
		double direction;
	public:
		MovementVector2d();
		MovementVector2d(const int radius, const double direction);
		int getRadius();
		double getDirection();
		void setRadius(const int radius);
		void setDirection(const double direction);		



}
