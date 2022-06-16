#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(char* characters) {
	char* result = (char*)malloc(sizeof(char) * 100); //동적할당
	int len = 0; //글자길이

	for (int i = 0; i < strlen(characters); i++) {
		if (characters[i] != characters[i + 1]) result[len++] = characters[i]; //현재글자, 뒤에 글자가 다르면 현재글자를 result에 넣기.
	}
	result[len] = '\0'; //글자 끝에 널문자 삽입.

	return result;
}
int main(void) {
	char* characters = "senteeeencccccceeee";
	char* ret = solution(characters);
	printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
	return 0;
}