#include <stdio.h>



unsigned long int Find_BE_Point(int x, int y)
{
	if(y > x)
		return 1;
	else return 0;
}

int main()
{

	unsigned long int sum = 0 ;
	int a, b, c;
	unsigned long int i = 0;
	unsigned long int v = 0;
	unsigned long int b1, c1;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
		
	 
		for(i = 0 ; i <2100000000; i++) {
			b1 = b * i;
			c1 = c * i;
			v = a+b1;
			if (Find_BE_Point(v, c1) == 1){
			printf("v : %ld a+b1 : %ld c1 : %ld a : %d b : %d b1: %ld c : %d \n", v, a+b1, c1, a, b, b1, c);
				printf("%ld",i);
				return 0; 
			}
			
		}
		printf("-1");
	
	return 0;
}

