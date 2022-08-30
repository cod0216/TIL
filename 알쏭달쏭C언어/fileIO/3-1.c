#include <stdio.h>
#include <string.h>

#define NUM_MAX 50
#define NAME_LEN 100

typedef struct {
	char name[NAME_LEN];
	double height;
	double weight;
}	Human;

void Swap_Human(Human *x, Human *y)
{
	Human temp = *x;
	*x = *y;
	*y = temp;
}

void sort_by_height(Human a[], int n)
{
	int i, j;

	for(i=0; i<n ; i++)
	{
		for( j = n-1; j > i; j--)
			if(a[j-1].height > a[j].height)
				Swap_Human(&a[j-1], &a[j]);
	}
}

int main()
{

	FILE *fp;
	int i, j;
	int number = 0;
	Human data[NUM_MAX];
	double hsum = 0.0;
	double wsum = 0.0;

	if((fp = fopen("hw.dat", "r")) == NULL)
		printf("\a파일을 열 수 없습니다.\n");
	else{
		for(i = 0; i < NUM_MAX; i++) {
			if(fscanf(fp, "%s%lf%lf", data[number].name, &data[number].height, &data[number].weight) != 3)
				break;
			
			hsum += data[number].height;
			wsum += data[number].weight;
			number ++;
		}

		sort_by_height(data, number);
		for(i = 0; i < number; i++)
			printf("%-10s %5.1f %5.1f\n", data[i].name, data[i].height, data[i].weight);

		printf("------------------------------\n");
		printf("평균	%5.1f %5.1f\n", hsum / number, wsum / number);
		fclose(fp);
	}
	return 0;
}
