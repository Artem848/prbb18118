#include <stdio.h>
#define FIELD_SIZE 9

extern int notGameOver;
extern int input;
extern int field[];
extern int winner;


void checkGameOver() {
	// Check horizontals
	if (field[0] == field[1] && field[1] == field[2]) {
		if (field[0] == 'X') winner = 1;
		else winner = 2;
	}
	if (field[3] == field[4] && field[4] == field[5]) {
		if (field[3] == 'X') winner = 1;
		else winner = 2;
	}
	if (field[6] == field[7] && field[7] == field[8]) {
		if (field[6] == 'X') winner = 1;
		else winner = 2;
	}
	// Check verticals
	if (field[0] == field[3] && field[3] == field[6]) {
		if (field[0] == 'X') winner = 1;
		else winner = 2;
	}
	if (field[1] == field[4] && field[4] == field[7]) {
		if (field[1] == 'X') winner = 1;
		else winner = 2;
	}
	if (field[2] == field[5] && field[5] == field[8]) {
		if (field[2] == 'X') winner = 1;
		else winner = 2;
	}
	// Check diagonals
	if ((field[0] == field[4] && field[4] == field[8]) ||
		(field[2] == field[4] && field[4] == field[6])) {
		if (field[4] == 'X') winner = 1;
		else winner = 2;
	}
	if (!winner) {
		for (int i = 0; i < FIELD_SIZE; i++) {
			if (field[i] == i + 1) {
				return;
			}
		}
		winner = 3;
	}
}