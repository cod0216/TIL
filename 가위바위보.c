#include <stdio.h>
#include <string.h>

int countWaysToWinPrize() {
    string choices[] = {'가위', '바위', '보'};
    int winningCases = 0;

    for (int choice1 = 0; choice1 < 3; choice1++) {
        for (int choice2 = 0; choice2 < 3; choice2++) {
            for (int choice3 = 0; choice3 < 3; choice3++) {
                char result = "";

                if (choices[choice1] == choices[choice2] && choices[choice2] == choices[choice3]) {
                    result = '비김';
                } else if (choices[choice1] != choices[choice2] && choices[choice2] != choices[choice3] && choices[choice1] != choices[choice3]) {
                    result = '비김';
                }

                if (result != '비김') {
                    winningCases++;
                }
            }
        }
    }

    return winningCases;
}

int main() {
    int totalWays = countWaysToWinPrize();
    printf("영희가 상금을 획득하는 경우의 수: %d\n", totalWays);
    return 0;
}

