// 최소값과 위치를 구하라.
#include <stdio.h>

int main(void) {
	int arr[10] = { 2,5,78,43,-45,68,31,100,45,23 };
	int min = arr[0], min_loc = 0; // 초기값을 배열의 첫 번째 값으로 지정 - 배열안에 값이 음수면 최대값을 못구함.

	for (int i = 1; i < 10; i++) {
		if (min > arr[i]) {
			min = arr[i];
			min_loc = i;
		}

	}

	printf("최소값은 %d 입니다.\n", min);
	printf("최소값의 위치는 인덱스 %d 입니다.\n", min_loc);
	return 0;
}