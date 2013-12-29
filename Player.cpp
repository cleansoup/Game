Player::Player(int life, int score, int xPos, int yPos) {
	this->life = life;
	this->score = score;
	this->myPaddle = new Paddle(xPos, yPos);
}
