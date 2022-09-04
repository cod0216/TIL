#include <stdio.h>
#define NUMBER 80

int main()
{
	int i, j;
	int num;
	int score[NUMBER];
	int dist[11] = {0};
	int dist_max = 0;

	printf("학생 수를 입력해주세요. ");

	do{
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("\a1~%d사이로 입력헤주세요. ", NUMBER);
	} while(num < 1 || num > NUMBER);

	printf("%d명의 점수를 입력해주세요.\n", num);

	for(i = 0; i < num ; i++) {
		printf("%2d번 : ", i + 1);
		do {
			scanf("%d", &score[i]);
			if (score[i] < 0 || score[i] > 100)
				printf("\a0~100 사이로 입력하세요.");
		}	while(score[i] < 0 || score[i] > 100);
		dist[score[i] / 10] ++;
	}

	puts("\n--- 분포 그래프 ---");

	for(i = 0; i <=10; i++)
		if(dist[i] > dist_max)
			dist_max=dist[i];

	for(i = dist_max; i >= 1; i--) {
		for(j = 0; j <= 10; j++) {
			if(dist[j] >= i)
				printf(" * ");
			else
				printf("   ");
			}
		printf("\n");
	}

	for(i=0; i < 34; i++)
		putchar('-');
	putchar('\n');

	for(i = 0 ; i<=10; i++)
		printf("%2d", i * 10);
	putchar('\n');

	return 0;
}

