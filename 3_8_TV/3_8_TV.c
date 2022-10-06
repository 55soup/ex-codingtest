#include <stdio.h>
#include <stdlib.h>

// 0 1 2 3 4 5 6 7
// 
// 0: 1 2 3 4 5 6
// 1:     3 4 5
// 2:   2 3 4 5 6 7 8

int solution(int programs[][2], int programs_len) {
	int answer = 0;
	int used_tv[25] = { 0, };
	int used_tv_size = sizeof(used_tv) / sizeof(int);

	for (int i = 0; i < programs_len; i++)
		for (int j = programs[i][0]; j < programs[i][1]; j++)
			++used_tv[j];

	for (int i = 0; i < used_tv_size; i++)
		if (used_tv[i] >= 2) ++answer;

	return  answer;
}
int main(void) {
	int programs[3][2] = { {1,6}, {3,5}, {2,8} };
	int programs_len = 3;
	int ret = solution(programs, programs_len);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

	return 0;
}