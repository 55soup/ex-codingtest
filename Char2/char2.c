#include <stdio.h>

int main(void) {
	char colors[5][10] = {"red" , "green", "blue", "brown", "cyan" };
	//단어 단위로 출력
	for (int i = 0; i < 5; i++) { //행단위
		printf("%s\n", colors[i]);  // 티셔츠 "XL"사이즈가 몇 개 있는가?
	}
	printf("\n");

	//문자 단위로 출력
	for (int i = 0; i < 5; i++) { //행 
		for (int j = 0; j < 10; j++) { //열
			printf("%c  ", colors[i][j]);  // 문자 "e"가 몇개 있는가?
		}
		printf("\n");
	}
	return 0;
}