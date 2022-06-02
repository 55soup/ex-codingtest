#include <stdio.h>
#include <string.h>

int solution(int price, char *grade) {
	int answer;
	if (strcmp(grade, "S")==0) answer  = (int)price * 0.95;
	else if (strcmp(grade, "G")==0) answer = (int)price * 0.9;
	else answer = (int)price * 0.85;
	return answer;
}

int main(void) {
	char* grade[6] = { "S", "G", "V" };
	int result;
	result = solution(2500, "V");
	printf("할인 금액 : %d\n", result);

	return 0;
}