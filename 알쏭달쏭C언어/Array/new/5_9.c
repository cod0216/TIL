#include <stdio.h>
#define NUMBER 80 /* 최대 학생 수*/

int main(){
 int i, j;
 int num;							// 실제 학생 수
 int score[NUMBER];		// 학생 점수
 int dist[11] = {0};	// 점수 분포
 int dist_max = 0;		// 분포의 최댓값


 do { 
	printf("학생 수를 입력하시오 : ");
	scanf("%d", &num);
	if (num < 1 || num > NUMBER)
		printf("1~%d 사이로 입력하시오\n", NUMBER);
	} while (num < 1 || num > NUMBER);

	printf("%d명의 점수를 입력해주세요\n", num);

	for(i = 0; i < num; i++) {
		printf("%2d번 : ", i + 1);
		do {
			scanf("%d", &score[i]);
			if(score[i] < 0 || score[i] > 100)
				printf("0~100 사이로 입력해주세요\n");
		} while(score[i] < 0 || score[i] >100 );
		dist[score[i] / 10]++;
	}
	
	puts("\n --- 분포 그래프 ---");

	for( i = 0; i <= 10; i++)
		if(dist[i] > dist_max)
			dist_max = dist[i];

	for( i = dist_max; i >= 1; i--){
		for(j = 0; j <= 10; j++) {
			if (dist[j] >= i)
				printf(" * ");
			else
				printf("  ");
		}
		printf("\n");
	}

	for( i = 0; i< 34; i++)
		putchar('-');
	putchar('\n');

	for(i = 0; i <= 10; i++)
		printf("%2d ", i * 10);
	putchar('\n');

	return 0;
}



