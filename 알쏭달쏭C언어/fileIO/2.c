#include <stdio.h>

int ferase(const char *filename)
{
	FILE *fp;

	if((fp = fopen(filename, "w")) == NULL)
		return 0;
	fclose(fp);
	return 1;
}

int main()
{
	FILE *fp;
	char fname[256];

	printf("내용을 삭제할 파일 이름 : ");
	scanf("%s", fname);

	if(ferase(fname))
		printf("이 파일의 내용을 삭제햇습니다.\n");
	else
		printf("이 파일의 내용은 삭제할 수 없습니다.\n");

	return 0;
}
