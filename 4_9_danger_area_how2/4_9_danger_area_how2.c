#include <stdio.h>
#include <stdlib.h>


int main() {
	int height[4][4] = { {3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9} };
	int height_len = 4;
	int ret = solution(height, height_len = 4);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}