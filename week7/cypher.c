// cypher.c
#include <stdio.h>
#include "encrypt.h"

int main() {
	extern int shift;
	char msg[100];

	// �޽��� �Է� �ޱ�
	printf("Enter a message to encrypt : ");
	fgets(msg, sizeof(msg), stdin);
	// scan_s() �Լ� ����� ��, �پ����� ���� �� ������     abc def -> abc
	// fgets() �Լ��� ����ϸ�, �پ��� ���� ���� �� �ִ�.   abc def -> abc def

	printf("How many letters to shift? >> ");
	scanf_s("%d", &shift);

	encrypt(msg);

	printf("Encrypted : %s\n", msg);

	getch();
	return 0;
}