extern int input;
extern int wrongInput;
extern int field[];
extern int player;

void checkInput() {
	if (input < 1 || input > 9) wrongInput = 1;
	else if (field[input - 1] == 'X') wrongInput = 1;
	else {
		field[input - 1] = 'X';
		player = 2;
	}
}