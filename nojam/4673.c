#include<stdio.h>
int total[10000] = {0};

int Kaprekar(int n)
{
	int a=0;//일의 자리
	int b=0;//십의 자리
	int c =0;//백의 자리
	int d = 0;//천의 자리
	a = n%10;
	b = (n/10)%10;
	c = (n/100)%10;
	d = (n/1000)%10;

	int ans = n+a+b+c+d;
	total[ans] = 1;
	if(ans>=10000)
		return 0;
	else
	{
		return Kaprekar (ans);
	}
}

int main()
{
	for(int i = 1; i<10000; i++)
	Kaprekar(i);

	for(int i = 0 ; i < 10000; i++)
	{
		if(total[i] == 0)
			printf("%d\n", i);
	}

	return 0;
}
