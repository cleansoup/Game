class Player {
	private:
		int life;
		int score;
		Paddle* myPaddle;
	public:
		Player(int life, int score, int xPos, int yPos);
		move(Movement movement_data_ );
			


}
