#define FIELD_SIZE 9


extern int input;
extern int wrongInput;
extern int field[];
extern int player;
extern int winner;
extern int notGameOver;

void init();

void checkInput() {
	if (winner) {
		if (input == 1) init();
		else notGameOver = 0;
	}
	else {
		if (input < 1 || input > FIELD_SIZE ||
			field[input - 1] == 'X' || field[input - 1] == 'O') wrongInput = 1;
		else {
			if (player == 1) {
				field[input - 1] = 'X';
				player = 2;
			}
			else {
				field[input - 1] = 'O';
				player = 1;
			}
		}
	}
}