/* 배열 활용 연습2
* 1. 배열(길이 10)에 저장된 10개의 숫자 중 최대값과 최대값의 위치를 구하라.
* 초기화 => 상수x 2x, 0x
*		   일반화된 값 arr[0]
*/
#include <stdio.h>

int main(void) {
	int arr[10] = { 2,5,78,43,-45,68,31,100,45,23 };
	int max = arr[0], max_loc = 0; // 초기값을 배열의 첫번째 값으로 지정 ㅡ 배열안에 값이 음수면 최대값을 못구함.

	for (int i = 1; i < 10; i++) {
		if (max < arr[i]) {
			max = arr[i];
			max_loc = i;
		}
	
	}

	printf("최대값은 %d 입니다.\n", max);
	printf("최대값의 위치는 인덱스 %d 입니다.\n", max_loc);
	return 0;
}
