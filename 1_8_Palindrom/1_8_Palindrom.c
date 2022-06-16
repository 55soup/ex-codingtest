#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool solution(char *str) {
	// 추출 + malloc
	char* newStr = (char*)malloc(sizeof(char) * 103); //조건 sentence의 길이는 1이상 100이하입니다.  100보다 조금 크게
	newStr = str;
	for (int i = 0; i < strlen(newStr)/2; i++) {//문자열 길이의 반 만큼 돌려야함.
		if (newStr[i] != newStr[strlen(newStr) - 1 - i]) { // 앞문자와 뒤에 문자가 같지않을 때
			return false;
		}
	}
	return true;
}
int main(void) {
	char str[] = "racecar";
	int result;
	result = solution(str);
	if (result == true) {
		printf("팰린드롬문자입니다.");
	}
	else {
		printf("팰린드롬문자가 아닙니다.");
	}
	return 0;
}