#define FIELD_SIZE 9

int input;
int notGameOver;
int field[FIELD_SIZE];
int wrongInput;
int player;
int winner;

void printMenu();
void init();
void gameLoop();

int main() {
	printMenu();
	init();
	if (input == 1) {
		notGameOver = 1;
		gameLoop();
	}
	return 0;
}