#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
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
#endif //PLAYER_H_INCLUDED
