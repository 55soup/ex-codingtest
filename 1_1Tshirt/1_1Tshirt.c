#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* solution(char* shirt[], int shirt_size) {
	int* answer;
	answer = (int*)(malloc(sizeof(int) * shirt_size));
	//초기화
	for (int i = 0; i < shirt_size; i++) {
		answer[i] = 0;
	}
	
	//로직
	for (int i = 0; i < shirt_size; i++) {
		if (strcmp(shirt[i], "XS") == 0) answer[0]++;
		else if (strcmp(shirt[i], "S") == 0) answer[1]++;
		else if (strcmp(shirt[i], "M") == 0) answer[2]++;
		else if (strcmp(shirt[i], "L") == 0) answer[3]++;
		else if (strcmp(shirt[i], "XL") == 0) answer[4]++;
		else answer[5]++;
	}
	return answer;
}
int main(void) {
	char* shirt_size[6] = { "XS", "XS" , "XXL", "S", "M", "L" };
	int* result;
	result = solution(shirt_size, 6);
	for (int i = 0; i < 6; i++) {
		printf("%d\n", result[i]);
	}
	return 0;
}