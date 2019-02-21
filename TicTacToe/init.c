#define FIELD_SIZE 9

extern int field[];
extern int wrongInput;
extern int player;
extern int winner;

void init() {
	for (int i = 0; i < FIELD_SIZE; i++) field[i] = i + 1;
	winner = wrongInput = 0;
	player = 1;
}