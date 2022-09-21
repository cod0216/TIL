#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	char a = '*';
	char b = ' ';

	for(int i = 0; i < 5; i++)
	{
		for(int j = 5-i; j > 0; j--)
			printf("%c", b);
		for(int k = 0; k <i+1; k++)
			printf("%c", a);
		for(int z = 0; z < i; z++)
			printf("%c", a);
		sleep(1);
		printf("\n");
	}	


	return 0;
}
