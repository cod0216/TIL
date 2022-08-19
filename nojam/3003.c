#include <stdio.h>

int main()
{

int king = 1;
int queen = 1;
int look = 2;
int bishop = 2;
int night = 2;
int phon = 8;


int dking = 0;
int dqueen = 0;
int dlook = 0;
int dbishop = 0;
int dnight = 0;
int dphon = 0;

scanf("%d %d %d %d %d %d", &dking, &dqueen, &dlook, &dbishop, &dnight, &dphon);

printf("%d %d %d %d %d %d\n", king-dking, queen-dqueen, look-dlook, bishop-dbishop, night-dnight, phon-dphon);

return 0;
}

