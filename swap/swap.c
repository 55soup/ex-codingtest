#include <stdio.h>

void swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main(void) {
	int a = 5, b = 8;
	printf("함수호출 전 \n");
	printf("a: %d b: %d\n", a, b);
	swap(a, b); //함수가 끝나는 순간 a,b값은 사라짐
	printf("함수호출 후 \n");
	printf("a: %d b: %d\n", a, b); //출력할 때 main함수에 있는 a,b를 출력함.

	return 0;
}