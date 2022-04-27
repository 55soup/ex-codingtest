#include <stdio.h>
int arr1[10]; //전역변수 => 함수들이 공유하는 변수 => 초기화 안해도됨.

int main(void) {
	//int num = 10;
	//int arr[num];

	int arr2[10];  // main 에서만 동작하는 지역변수 => 초기화

	for (int i = 0; i < 10; i++) {
		printf("arr2[%d] = %d\n", i, arr2[i]);
	}
	for (int i = 0; i < 10; i++) {
		printf("arr1[%d] = %d\n", i, arr1[i]);  //전역변수는 초기화 하지 않아도됨. 쓰레기값이 안들어감.
	}
	
	return 0;
}               