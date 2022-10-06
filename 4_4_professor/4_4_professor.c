#include <stdio.h>

int solution(int classes[], int classes_len, int m) {
	int answer = 0;
	for (int i = 0; i < classes_len; i++) {
		answer += classes[i] / m; // 학생수에서 담당명수를 나누기
		if (classes[i] % m > 0) //나머지가 0보다 크다면 선생님 1명 추가
			++answer;
	}
	return answer;
}
int main(void) {
	int classes[] = { 80,45,33,20 };
	int m = 30;
	int ret = solution(classes, 4, m);
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret); //8

	return 0;
}