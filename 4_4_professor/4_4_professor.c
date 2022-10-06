#include <stdio.h>

int solution(int classes[], int classes_len, int m) {
	int answer = 0;
	for (int i = 0; i < classes_len; i++) {
		answer += classes[i] / m; // �л������� ������� ������
		if (classes[i] % m > 0) //�������� 0���� ũ�ٸ� ������ 1�� �߰�
			++answer;
	}
	return answer;
}
int main(void) {
	int classes[] = { 80,45,33,20 };
	int m = 30;
	int ret = solution(classes, 4, m);
	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret); //8

	return 0;
}