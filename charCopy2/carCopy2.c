//문자열의 길이를 구하지 않고 복사 => 마지막 요소에 널을 삽입
#include <stdio.h>

int main(void) {
	char s1[20] = { "coding test" };
	char s2[20];
	int i;
	for (i = 0; s1[i] != 0; i++) {
		s2[i] = s1[i];
	}
	s2[i] = 0; //마지막에 널문자 삽입  i==문자열의 길이
	printf("%s", s2);
	return 0;
}