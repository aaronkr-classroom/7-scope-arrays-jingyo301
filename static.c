// static.c
#include <stdio.h>



void Test1() {
	int data = 0;
	printf("%d, ", data++);
}

void Test2() {
	static int data = 0;
	printf("%d, ", data++);
}

int main(void) {
	printf("Test1() : ");
	for (int i = 0; i < 5; i++) Test1();
	printf("\nTest2() : ");
	for (int i = 0; i < 5; i++) Test2();

	getch();
	return 0;
}