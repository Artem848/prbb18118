#define FIELD_SIZE 9

extern int notGameOver;
extern int field[];
extern int wrongInput;
extern int player;

void init() {
	for (int i = 0; i < FIELD_SIZE; i++) field[i] = i + 1;
	notGameOver = 1;
	wrongInput = 0;
	player = 1;
}