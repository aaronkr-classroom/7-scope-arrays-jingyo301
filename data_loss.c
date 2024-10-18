// data_loss.c
#include <stdio.h>

int main(void) {
	unsigned int x = 0x12345678;
	long lg = 2147483648;
	double xl = 123456789123.456789;

	printf("Uint : %d\n", x);
	printf("Uint -> short : %d\n", (short)x);
	printf("Uint -> char : %d\n", (char)x);

	printf("Long : %d\n", lg);
	printf("Long -> int : %d\n", (int)lg);
	printf("Long -> char : %d\n", (char)lg);

	printf("Dbl : %lf\n", xl);
	printf("Dbl -> long : %d\n", (long)xl);
	printf("Dbl -> short : %d\n", (short)xl);

	getch();
	return 0;
}