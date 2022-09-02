#include <stdio.h>
#define NUMBER 96

int main()
{
	int i, num;
	int a[NUMBER];


	printf("데이터 수 : ");

	do{
		scanf("%d", &num);
		if(num < 1 || num > NUMBER)
			printf("\a1~%d 사이로 입력해주세요. ", NUMBER);
		} while (num < 1 || num> NUMBER);

		for(i = 0; i < num; i++) {
			printf("%2d번 : ", i+1);
			scanf("%d", &a[i]);
		}

		printf("{");

		for(i = 0; i < num - 1; i++)
			printf("%d, ", a[i]);

		printf("%d}\n", a[i]);

		return 0;
	}
