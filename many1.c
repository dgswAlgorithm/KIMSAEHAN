#include <stdio.h>
#include <stdbool.h>
#define MAX 10

int main(void) {
	
	int data[MAX] = {0,0,1,0,1,1,1,0,1,1};
	int i;
	
	int startIdx = 0;
	int finIdx = 0;
	int count = 0;
	
	int prevIdx = 0;
	bool lock = false;
	
	/* 전체 자료 출력*/ 
	for(i = 0; i<MAX; i++) {
		printf("%d", data[i]);
	}
	
	for(i = 0; i<MAX; i++) {		
	
		//data가 1이면서 락이 걸려있지 않다면 -> 0이 나오다가 1이 나왔을 때	
		if(!lock && data[i] == 1) {
			lock = true;
			startIdx = i; //1이 시작하는 부분 
		}
		
		else if(lock && data[i] == 0) {
			
			//prevIdx가 초기값일때 
			if(prevIdx == 0) 
				prevIdx = i;
			
			lock = false;
			finIdx = i; //1이 끝나는 부분
			count = finIdx - startIdx; 
		}
		
		if(!lock && finIdx != 0 && finIdx - startIdx >= count) {
			
			data[prevIdx] = 0;
			prevIdx = finIdx;
			data[finIdx] = 1;
		}			
	}	
	
	printf("\n");
	 
	/* 전체 자료 출력 */
	for(i = 0; i<MAX; i++) {
		printf("%d", data[i]);
	}
	
	printf("\n");	
	printf("Output: %d", finIdx);
	
	return 0;
}
