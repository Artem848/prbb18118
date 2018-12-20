#include <stdio.h>

#define SIZE 1000
#define or ||
#define and &&
#define equals ==

int odds[SIZE] = { 0 };
int evens[SIZE] = { 0 };
int number = 0;

void readNumber();
void buildArrays();
void printOdds();
void printEvens();

