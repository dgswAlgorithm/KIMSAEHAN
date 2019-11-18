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
	
	/* ��ü �ڷ� ���*/ 
	for(i = 0; i<MAX; i++) {
		printf("%d", data[i]);
	}
	
	for(i = 0; i<MAX; i++) {		
	
		//data�� 1�̸鼭 ���� �ɷ����� �ʴٸ� -> 0�� �����ٰ� 1�� ������ ��	
		if(!lock && data[i] == 1) {
			lock = true;
			startIdx = i; //1�� �����ϴ� �κ� 
		}
		
		else if(lock && data[i] == 0) {
			
			//prevIdx�� �ʱⰪ�϶� 
			if(prevIdx == 0) 
				prevIdx = i;
			
			lock = false;
			finIdx = i; //1�� ������ �κ�
			count = finIdx - startIdx; 
		}
		
		if(!lock && finIdx != 0 && finIdx - startIdx >= count) {
			
			data[prevIdx] = 0;
			prevIdx = finIdx;
			data[finIdx] = 1;
		}			
	}	
	
	printf("\n");
	 
	/* ��ü �ڷ� ��� */
	for(i = 0; i<MAX; i++) {
		printf("%d", data[i]);
	}
	
	printf("\n");	
	printf("Output: %d", finIdx);
	
	return 0;
}
