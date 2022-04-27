#include <stdio.h>

int main(void) {
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}

	int arr2[3][4]={0};  //12개가 한꺼번에 초기화됨.

	printf("arr2의 크기: %d\n", sizeof(arr2)); // 12 * 4(byte) = 48
	printf("arr2[0]의 크기: %d\n", sizeof(arr2[0])); //4(행)*4(byte) = 16
	printf("arr2[1]의 크기: %d\n", sizeof(arr2[1])); //4(행)*4(byte) = 16
	printf("arr2[2]의 크기: %d\n", sizeof(arr2[2])); //4(행)*4(byte) = 16
	printf("arr2[2][3]의 크기: %d\n", sizeof(arr2[2][3])); //4byte
	printf("arr2하나의 크기: %d\n", sizeof(arr2)/sizeof(arr2[0][0])); //배열의 길이 48(byte)/4(byte)
	return 0;
}