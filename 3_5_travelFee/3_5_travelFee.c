#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
* 20살이상 : 어른 요금.
* 20살 미만: 어린이 요금
* 
* 여행객들이 10명 이상인 경우 
* 어른 : 10%, 어린이: 20% 할인... 0.9, 0.8 곱하기.
*/

int solution(int member_age[], int member_age_len, char* transportation) {
	int adult_expense = 0;
	int child_expense = 0;
	int total_expenses = 0;
	// 1. 교통수단에 따라 요금 결정
	if (strcmp(transportation, "Bus") == 0) {
		adult_expense = 40000;
		child_expense = 15000;
	}
	else if (strcmp(transportation, "Ship") == 0) {
		adult_expense = 30000;
		child_expense = 13000;
	}
	else {
		adult_expense = 70000;
		child_expense = 45000;
	}
		
	// 2. 전체 인원이 10명이 넘는지 여부 결정
	if (member_age_len >= 10) {
		adult_expense *= 0.9;
		child_expense *= 0.8;
	}

	// 3. 연령에 따른 요금 확정
	for (int i = 0; i < member_age_len; i++) {
		if (member_age[i] >= 20) {
			total_expenses += adult_expense;
		}
		else {
			total_expenses += child_expense;
		}
	}

	// 4. 전체 요금의 합을 리턴
	return total_expenses;
}

int main(void) {
	int member_age1[5] = { 13,33,45,11,20 };
	int member_age1_len = 5;
	char* transportations1 = "Bus";
	int ret1 = solution(member_age1, member_age1_len, transportations1);
	printf("solution함수의 반환 값은 %d입니다.\n", ret1);

	int member_age2[10] = { 25,11,27,56,7,19,52,31,77,8 };
	int member_age2_len = 10;
	char* transportations2 = "Ship";
	int ret2 = solution(member_age2, member_age2_len, transportations2);
	printf("solution함수의 반환 값은 %d입니다.\n", ret2);

	return 0;
}