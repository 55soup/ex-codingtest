#include <stdio.h>
//- s1[20]={"coding test"}의 문자열의 길이를 while문(추천)과 for문을 이용하여 구해보자.
int main(void) {
	char s1[30] = { "coding test exercise" };
	int count = 0;
	//s1의 길이 => while => 11
	// 널표시 ==0 or =='\0'
	while (s1[count] != '\0') {//시험문제에 더 많이 나옴.
		++count;
	}
	printf("문자열의 길이: %d\n", count);
	count = 0;
	//for문
	for (int i = 0; i < 30; i++) {
		if (s1[i] == 0) break; //0은 숫자가 아닌 null을 의미
		++count;
	} 
	printf("문자열의 길이: %d", count);

	return 0;
}