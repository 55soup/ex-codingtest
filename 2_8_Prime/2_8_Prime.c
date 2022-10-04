#include <stdio.h>
#include <stdbool.h>
#include<stdlib.h>

int solution(int number) {
	int count = 0;

	while (number > 0) {
		int n = number % 10;
		if (n == 2 || n == 3 || n == 5 || n == 7) //switch case�� ����.
			count += 1;
		number /= 10;
	}
	return count;
}

int main(void) {
	int number = 29022531;
	int ret = solution(number);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

	return 0;
}