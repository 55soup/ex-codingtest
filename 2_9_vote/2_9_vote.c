#include <stdio.h>
#include <stdlib.h>

int solution(int votes[], int votes_len, int N, int K) {
	int counter[11] = { 0 };
	int answer = 0;

	// 후보자 수 세기
	for (int i = 0; i < votes_len; i++) 
		++counter[votes[i]];
	

	// K표를 받은 후보자의 명수 구하기
	for (int i = 0; i <= N; i++) 
		if (counter[i] == K)
			++answer;
	
	return answer;
}

int main(void) {
	int votes[10] = { 2,5,3,4,1,5,1,5,5,3 };
	int votes_len = 10;
	int N = 5;
	int K = 2;
	int ret = solution(votes, votes_len, N, K);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

	return 0;
}