#include <stdio.h>
#define NUMBER 6

int main()
{
	int i, j;
	int score[NUMBER][2];
	int student[NUMBER] = {0};
	int subject[2] = {0};

	printf("%d명의 점수를 입력하세요.\n", NUMBER);

	for( i = 0; i < NUMBER; i++) {
		printf("%2d번_국어: ", i +1);
		scanf("%d", &score[i][0]);
		printf("      수학 : ");
		scanf( "%d", &score[i][1]);

		student[i] = score[i][0] + score[i][1];
		subject[0] += score[i][0];
		subject[1] += score[i][1];
	}

	printf("---------------------------\n");
	printf("번호 국어 수학 합계 평균\n");
	printf("---------------------------\n");
	for(i = 0; i < NUMBER; i++)
		printf("%3d%6d%6d%6d%7.1f\n", i + 1, score[i][0], score[i][1], score[i], (double)student[i]/2);
	printf("---------------------------\n");
	printf("합계%5d%6d%6d\n", subject[0], subject[1], subject[0] + subject[1]);
	printf("평균 %6.1f%6.1f%6.1f\n", (double)subject[0] / NUMBER, (double)subject[1] / NUMBER, (double)subject[0] + subject[1] / NUMBER);
	printf("---------------------------\n");

	return 0;
}

