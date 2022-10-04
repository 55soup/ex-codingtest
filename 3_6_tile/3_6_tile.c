#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(int tile_length) {
	char* answer = (char*)malloc(sizeof(char) * (tile_length + 1));
	char com[6] = { 'R', 'R', 'R', 'G', 'G', 'B' }; //0,1,3
	int i = 0;

	//�ۼ�
	if (tile_length % 6 == 1 || tile_length % 6 == 2 || tile_length % 6 == 4) {
		// ������ �°� Ÿ���� ĥ�� �� ���ٸ�
		strcpy(answer, "-1");
	}
	else {
		for (i = 0; i < tile_length; i++) {
			answer[i] = com[i % 6];
		}
		answer[i] = '\0'; //������ �ι��� ����
	}

	return answer; //-1 or ���ڿ�
}

int main(void) {
	/*
	* 0 x
	* 1 x
	* 2 o
	* 3 x
	* 4 o
	* 5 o
	* 6 x
	* 7 x
	* 8 o
	* 9 x
	* 10 o
	* 11 o
	* 1, 2, 4, 7, 8, 10, 13, 14, 16, 19
	*/
	int tile_length1 = 11;
	char* ret1 = solution(tile_length1);
	printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret1);

	int tile_length2 = 16;
	char* ret2 = solution(tile_length2);
	printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret2);

	return 0;
}