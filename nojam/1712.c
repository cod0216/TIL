#include <stdio.h>

int sum(int a, int b){
	int s = 0;
	s = a + b;
	return s;
}

int ans(int a, int b){
	
	if (a < b)
		return 1;
	else return 0;
}

int main()
{

	int a, b, c;
	int v = 0;
	int m = 0;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d %d\n", a*(b*2100000001), c*2100000001);
/*	if(a*(b*2100000001) >= c*2100000001){
		printf("-1");
		return 0;
	}

	for(int i = 1 ; i < 2100000002; i++)
	{	
		printf("a : %d b : %d c : %d \n", a, b, c);
		int	d = b * i;
		int f = c * i;
		printf("d : %d\n",d);
		m = sum(a, d);
		printf("m : %d c : %d\n", m, c);
		if (ans(m,f) == 1){
			printf("%d\n", i);
			return 0;
		}
	}
	printf("-1");*/
	return 0;
}


