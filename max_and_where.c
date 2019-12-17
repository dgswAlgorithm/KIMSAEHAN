#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANDOM_MAX 100
#define SIZE 9

int main(void) {
	
	int data[SIZE][SIZE] = {0,};
	int i, j;
	int max = 0;
	int row, col;
	
	srand(time(NULL));
	
	for(i = 0; i < SIZE; i++) {
		for(j = 0; j< SIZE; j++) {
			data[i][j] = (rand() % RANDOM_MAX) + 1;
			printf("%4d ", data[i][j]);
			
			if(max < data[i][j]) {
				max = data[i][j];
				row = i + 1;
				col = j + 1;
			} 
		}
		printf("\n");
	}
	
	printf("\nÃÖ´ñ°ª: %d\n", max);
	printf("Çà: %d, ¿­: %d\n", row, col);
	
	return 0;
}

