#include <stdio.h>

void swap(int* pa, int* pb) {
	int a = *pa; //전달받은 주소a의 값을 복사
	int b = *pb; //전달받은 주소b의 값을 복사
	*pa = b;
	*pb = a;
}
int main(void) {
	int a = 5, b = 8;
	printf("함수호출 전 \n");
	printf("a: %d b: %d\n", a, b);
	swap(&a, &b);
	printf("함수호출 후 \n");
	printf("a: %d b: %d\n", a, b);
	return 0;
}