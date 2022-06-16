#include <stdio.h>

int solution(int num) {
	int count = 0;
	for (int i = 1; i <= num; i++) {
		int current = i;
		while (current != 0) {
			if (current % 10 == 3 || current % 10 == 6 || current % 10 == 9)
				count++;
			current /= 10;
		}
	}
	return count;
}

int main(void) {
	int result;
	result = solution(234);
	printf("¹Ú¼öÈ½¼ö : %d\n", result);

	return 0;
}