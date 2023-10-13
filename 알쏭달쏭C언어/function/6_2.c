#include <stdio.h>

int min3( int a, int b, int c)
{
	
	int min = a;

	if( b < min) min = b;
	if( c < min) min = c;

	return min;
}


int main() 
{
	int a, b, c;

	puts("정수 3개를 입력하시오 :" );
	printf(" 정수 1 : "); scanf("%d", &a);
	printf(" 정수 2 : "); scanf("%d", &b);
	printf(" 정수 3 : "); scanf("%d", &c);

	printf("최솟값은 %d입니다.\n", min3(a, b, c));

	return 0;
}
