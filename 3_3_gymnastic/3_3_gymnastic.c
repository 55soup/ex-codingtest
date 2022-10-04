#include <stdio.h>

int solution(int score[], int scores_len) {
    int answer = 0;
    int max = score[0];
    int min = score[0];
    for (int i = 0; i < scores_len; i++) {
        if (max < score[i])
            max = score[i];
        if (min > score[i])
            min = score[i];
    }
    for (int i = 0; i < scores_len; i++) {
        answer += score[i];
    }
    answer = (answer - max - min) / (scores_len - 2);

    return answer;
}

int main(void) {
    int scores1[10] = { 35, 28, 98, 34, 20, 50, 85, 74, 71, 7 };
    int scores1_len = 10;
    int ret1 = solution(scores1, scores1_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int scores2[5] = { 1, 1, 1, 1, 1 };
    int scores2_len = 5;
    int ret2 = solution(scores2, scores2_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);

    return 0;
}