#pragma once
// array_funcs.h

// 성적 바꾸는 함수
void swap_grades(int grades[], int idx1, int idx2) {
	int temp = grades[idx1];
	grades[idx1] = grades[idx2];
	grades[idx2] = temp;
}

// 성적 정렬하는 함수
void insertion_sort(int grades[], int size) {
	for (int i = 1; i < size; i++) {
		int key = grades[i];
		int j = i - 1;

		// 만약 이전 값이 더 크면 grades[0..i-1] 이동
		while (j >= 0 && grades[j] > key) {
			grades[j + 1] = grades[j];
			j--;
		}
		grades[j + 1] = key;
	}
}