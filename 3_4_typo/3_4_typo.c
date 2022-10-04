#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(char* words[], int words_len, char* word) {
	int count = 0;
	for (int i = 0; i < words_len; i++) {
		for (int j = 0; j < strlen(words[i]); j++) {
			if (strcmp(words[i], word) != 0)
				++count;
		}
	}
	return count;
}

int main(void) {
	char* words[3] = { "CODE", "COED", "CDEO" };
	int words_len = 3;
	char* word = "CODE";
	int ret = solution(words, words_len, word);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret); //5

	return 0;
}