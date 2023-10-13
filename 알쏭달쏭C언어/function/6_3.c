#include <stdio.h>

int cube(int x)
{
	return x*x*x;
}

int main()
{
	int n;

	printf("정수값 : "); scanf("%d", &n);

	printf("%d의 3제곱값은 %d입니다. \n", n, cube(n));

	return 0;
}
