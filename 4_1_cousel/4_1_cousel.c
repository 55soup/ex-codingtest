#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* solution(char* schedule, int schedule_len) {
	int x_count = 0;
	for (int i = 0; i < schedule_len; i++)
		if (strcmp(schedule[i], "X") == 0) x_count++;

	int* answer = (int*)malloc(sizeof(int)*x_count);
	int count = 0;
	for (int i = 0; i < schedule_len; i++)
		if (strcmp(schedule[i], "X") == 0) answer[count++] = i + 1;
	return answer;
}
int main(void) {
	char* schedule[]  = {"O", "X", "X", "O", "O", "O", "X", "O", "X", "X"};
	int* ret = solution(schedule, 10);
	printf("solution 함수의 반환 값은 ");
	for (int i = 0; i < 5; i++) 
		printf("%d", ret[i]);
	printf("입니다\n");

	return 0;
}