#include <stdio.h>

int Sum_BE(int x, int y)
{
	int sum = x+y;

	return sum;
}


int Find_BE_Point(int x, int y)
{
	if(y > x)
		return 1;
	else return 0;
}

int main()
{

	int sum = 0 ;
	int a, b, c;
	int i = 0;
	int v = 0;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	if((a+b*2100000001) < c*2100000000)
		printf("2100000001");
		
	else {
		for(i = 0 ; i <2100000000; i++) {
			c = c * i;
			b = b * i;
			v = Sum_BE(a, b);
			if (Find_BE_Point(sum, c) == 1){
				printf("%d", i);
				break;
			}
		}
	}
	return 0;
}

