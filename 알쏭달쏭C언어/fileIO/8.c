#include <stdio.h>

int main()
{
	int ch;
	FILE *sfp; 
	FILE *dfp;
	char sname[FILENAME_MAX];
	char dname[FILENAME_MAX];
	
	printf("복사할 내용이 있는 파일 이름 : "); scanf("%s", sname);
	printf("내용을 복사해 넣을 파일 이름 : "); scanf("%s", dname);

	if((sfp = fopen(sname, "r")) == NULL)
		printf("\a복사할 내용이 있는 파일을 열 수 없습니다.\n");
	else{
		if((dfp = fopen(dname, "w")) == NULL)
			printf("\a내용을 복사해 넣을 파일을 열 수 없습니다.\n");
		else{
			while((ch = fgetc(sfp)) != EOF) {
				putchar(ch);
				fputc(ch, dfp);
			}
			fclose(dfp);
		}
		fclose(sfp);
	}
	return 0;
}
