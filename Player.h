class Player {
	private:
		int life;
		int score;
		Paddle myPaddle;
	public:
		Player();
		Player(int life, int score);
		move(Movement movement_data_ );
			


}
