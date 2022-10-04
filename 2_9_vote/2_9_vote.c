#include <stdio.h>
#include <stdlib.h>

int solution(int votes[], int votes_len, int N, int K) {
	int counter[11] = { 0 };
	int answer = 0;

	// �ĺ��� �� ����
	for (int i = 0; i < votes_len; i++) 
		++counter[votes[i]];
	

	// Kǥ�� ���� �ĺ����� ��� ���ϱ�
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

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

	return 0;
}