void printField() {

	int k = 1;
	for (int i = 0; i < 5; ++i) {
		if (i % 2 == 1) printf("-----");
		else {
			for (int j = 0; j < 5; ++j) {
				if (j % 2 == 1) printf("|");
				else {
					printf("%d", k);
					k++;
				}
			}
		}
		printf("\n");
	}
	getch();
}