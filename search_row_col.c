#include <stdio.h>
#define ROW 5
#define COL 4

int main(void) {
	
	int result[ROW][COL] = {0, };
	int i,j;
	int cnt = 1;
	
	/* 행 우선 탐색 */
	for(i = 0; i < ROW; i++) {
		for(j = 0; j < COL; j++) {
			result[i][j] = cnt;
			cnt++;
		}
	}

	for(i = 0; i < ROW; i++) {
		for(j = 0; j < COL; j++) {
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}

	cnt = 1;
	
	/* 열 우선 탐색 방법1 */
	/*
	for(i = 0; i < COL; i++) {
		for(j = 0; j < ROW; j++) {
			result[j][i] = cnt;
			cnt++;
		}
	}
	*/
	
	/*
	printf("\n");
	
	for(i = 0; i < ROW; i++) {
		for(j = 0; j < COL; j++) {
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
	*/
	
	/* 열 우선 탐색 방법2 */
	for(i = 0; i < ROW; i++) {
		for(j = 0; j < COL; j++) {
			printf("%d ", (i + 1) + j * 5);
		}
		printf("\n");
	}
	
	return 0;
}
