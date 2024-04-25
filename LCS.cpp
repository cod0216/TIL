#include<cstdio>
#include<cstring>
#include<algorithm>

char str1[1010];
char str2[1010];
int LCS[1010][1010];

int main(){ 
	scanf("%s", &str1);
	scanf("%s", &str2); 
	int s1 = strlen(str1);
	int s2 = strlen(str2);     
	for (int i = 1; i <= s1; i++) {
		for (int j = 1; j <= s2; j++) { 
			if (str1[i - 1] == str2[j - 1])
				LCS[i][j] = LCS[i - 1][j - 1] + 1;
			else
				LCS[i][j] = std::max(LCS[i - 1][j], LCS[i][j - 1]);
		}
	}    
	printf("%d\n", LCS[s1][s2]);        
	return 0;
}
