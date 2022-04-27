#include <stdio.h>

int main(void) {
	int arr[10];
	printf("arr배열의 크기: %d bytes \n", sizeof(arr));  //4 * 10 = 40
	printf("arr배열 요소의 크기: %d bytes \n", sizeof(arr[0])); //4
	printf("arr배열의 길이: %d \n", sizeof(arr) / sizeof(arr[0])); //40 / 4 =10

	//초기화를 하지 않으면 쓰레기값이 나옴.
	for (int i = 0; i < 10; i++) {
		printf("%d \n", arr[i]);
	}

	return 0;
}