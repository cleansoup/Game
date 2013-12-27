class Paddle {
	private:
		Point2d myPosition;
	public:
		Paddle();
		Paddle(int xPos, int yPos);
		Point2d getPosition();
		void movePosition(MovementVector2d aDirection);

}
