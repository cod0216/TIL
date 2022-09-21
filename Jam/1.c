#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	char a = '*';
	char b = ' ';
	int cnt = 0;

	for(int i = 0; i < 5; i++)
	{
		system("clear");
		for(int o = 0; o < cnt; o++)
		{
			for(int j = 5-o; j > 0; j--)
				printf("%c", b);
			for(int k = 0; k <o+1; k++)
				printf("%c", a);
			for(int z = 0; z < o; z++)
				printf("%c", a);
			printf("\n");
		}
		sleep(1); cnt++;
	}	


	return 0;
}
