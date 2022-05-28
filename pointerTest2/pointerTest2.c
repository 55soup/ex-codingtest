#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* pArr = &arr[0];
	int i;

	for (i = 0; i < 10; i++) {
		printf("%p : %d \n", &arr[i], arr[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++) {
		printf("%p : %d \n", pArr + i, *(pArr + i));
	}

	return 0;
}