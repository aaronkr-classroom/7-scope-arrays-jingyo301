// array.c
#include <stdio.h>
#include "array_funcs.h"

#define NUM_STUDENTS 5

void prinft_grades(int grades[]) {
	for (int i = 0; i < NUM_STUDENTS; i++) {
		printf("Student %d : %d\n", i + 1, grades[i]);
	}
}

int main(void) {
	int std_grades[NUM_STUDENTS] = { 85, 92, 78, 90,88 };

	printf("lnitial grades : \n");
	prinft_grades(std_grades);

	// 사용자가 성적 바꾸기
	int idx1, idx2;
	printf("\nSwap two grades (1-%d) : \n", NUM_STUDENTS);
	scanf_s("%d %d", &idx1, &idx2);

	// 0-기반 인덱스 때문에 감소
	idx1--;
	idx2--;

	// 맞는 인덱스 확인하고 성적 변경
	if (idx1 >= 0 && idx1 < NUM_STUDENTS &&
		idx2 >= 0 && idx2 < NUM_STUDENTS) {
		swap_grades(std_grades, idx1, idx2);

		printf("Grades after swap : \n");
		prinft_grades(std_grades);
	}
	else {
		printf("Invalid student numbers!\n");
	}

	// 성적 정렬하기
	insertion_sort(std_grades, NUM_STUDENTS);

	printf("\nAfter sorting\n");
	prinft_grades(std_grades);

	getch();
	return 0;
}