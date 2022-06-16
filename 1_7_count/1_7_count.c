#include <stdio.h>

int solution(int score[], int count) {
	int answer = 0;
	for (int i = 0; i < count; i++) {
		if (score[i] >= 650 && score[i] < 800) {
			++answer;
		}
	}
	return answer;
}
int main(void) {
	int score[] = { 650, 722, 914, 558, 714, 803, 650, 679, 669, 800};
	int result;
	result = solution(score, 10);
	printf("수강대상 : %d\n", result);
	return 0;
}