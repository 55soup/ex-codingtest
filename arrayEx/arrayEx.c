#include <stdio.h>
#include <string.h>	

int solution(int scores[], int scores_len) { // 매개변수 : 데이터타입 변수이름
	int count=0; //몇 명
	for (int i = 0; i < scores_len; i++) {
		if (scores[i] >= 650 && scores[i] < 800) { // 650점 이상 800점 미만
			++count;
		}
	}
	return count; //인원수 리턴.
}

int main(void) {
	int score[] = { 650, 722, 914, 558, 714, 803, 650, 679, 669, 800 };
	int result;
	result = solution(score, 10); //solution 함수를 만들어라
	printf("수강대상 : %d\n", result);
	return 0;
}