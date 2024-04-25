#include <stdio.h>
#define NUMBER 80

int main()
{
	int i, j;
	int num;
	int  score[NUMBER];
	int dist[11] = {0};

	printf("학생 수를 입력해주세요. ");

	do{
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("\a1~%d 사이로 입력해주세요. ", NUMBER);
		}	while (num < 1 || num > NUMBER);

		printf("%d명의 점수를 입력해 주세요.\n", num);

		for(i = 0; i < num; i++) {
			printf("%2d번 : ", i+1);
			do{
				scanf("%d", &score[i]);
				if(score[i] < 0 || score[i] > 100)
					printf("\a0~100 사이로 입력하세요.");
				} while(score[i] < 0 || score[i] > 100);
				dist[score[i] / 10] ++;
			}
			
			puts("\n---분포 그래프 ---");

			for( i = 0; i<=9; i++) {
				printf("%3d~%3d : ", i * 10, i * 10 + 9);
				for(j = 0; j < dist[i]; j++)
					putchar('*');
				putchar('\n');
			}

			printf("   100 : ");
			for(j = 0 ; j < dist[10]; j++)
				putchar('*');
			putchar('\n');

			return 0;
}
			
