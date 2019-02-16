extern int input;
extern int wrongInput;
extern int field[];
extern int player;

void checkInput() {
	if (input < 1 || input > 9 || field[input - 1] == 'X' || field[input - 1 ] == 'O') wrongInput = 1;
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