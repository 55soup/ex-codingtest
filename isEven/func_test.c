#include <stdio.h>
// display 함수 작성 isEven

void display(int length, char ch) {
	for (int i = 1; i <= length; i++) {
		printf("%c", ch);
	}
}

int isEven(int num) {
	return (num % 2 == 0) ? 1 : 0;  //삼항연산자 사용.
	/*if (num % 2 == 0) {
		return 1;
	}else{
		return 0;
	}*/
}

int main(void) {
	display(20, '#');
	if (isEven(10) == 1) {
		printf("\n짝수입니다 ");
	}
	else {
		printf("\n홀수입니다 ");
	}
	return 0;
}