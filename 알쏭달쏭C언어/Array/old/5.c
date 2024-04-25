#include <stdio.h>
#define NUMBER 7

int main()
{
	int i;
	int x[NUMBER];

	for(i = 0; i< NUMBER; i++)
	{	
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for(i = 0 ; i< NUMBER/2; i++) {
		int temp = x[i];
		x[i] = x[NUMBER - i - 1];
		x[NUMBER - i - i] = temp;
	}

	puts("반전했습니다.");
	for( i = 0; i < NUMBER; i++) 
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
