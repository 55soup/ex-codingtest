#include <stdio.h>

int main(void) {
	int number;
	int* pNumber = NULL;
	number = 5;
	printf("number의 값 : %d\n", number);

	pNumber = &number;
	*pNumber = *pNumber + 5;
	printf("number의 값 : %d\n", number);
	printf("number의 주소값 : %p\n", &number);
	printf("pNumber의 값 : %d\n", *pNumber);
	printf("pNumber의 주소값 : %p\n", pNumber);

	return 0;
}