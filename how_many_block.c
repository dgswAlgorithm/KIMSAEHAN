#include <stdio.h>

int main(void) {
	
	int a[6] = {0};
	
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	a[4] = 5;
	a[5] = 1;
	
	int i;
	
	for(i=1; i<=5; i++)
		a[i]=a[a[i]];
	
	for(i = 0; i<6; i++)
		printf("%d:%d\n", i, a[i]);
	
	
	return 0;
}
