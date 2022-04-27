// 문자열의 길이를 구해서 길이만큼 복사
#include <stdio.h>

int main(void) {
	char s1[20] = { "coding test" };
	char s2[20];
	int cnt = 0;

	//문자열의 길이 구하기
	while (s1[cnt] != 0) {
		++cnt; //문자열의 길이
	}
	// s2에 s1문자열 복사하기
	for (int i = 0; i <= cnt; i++) { // cnt 문자열길이이므로 <=
		s2[i] = s1[i];
	}
	printf("s1의 문자열은: %s\n", s1);
	printf("s2의 문자열은: %s", s2);
}