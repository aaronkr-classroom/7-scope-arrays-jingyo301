// cypher.c
#include <stdio.h>
#include "encrypt.h"

int main() {
	extern int shift;
	char msg[100];

	// 메시지 입력 받기
	printf("Enter a message to encrypt : ");
	fgets(msg, sizeof(msg), stdin);
	// scan_s() 함수 사용할 떄, 뛰어쓰기까지 받을 수 있지만     abc def -> abc
	// fgets() 함수를 사용하면, 뛰어쓰기와 같이 받을 수 있다.   abc def -> abc def

	printf("How many letters to shift? >> ");
	scanf_s("%d", &shift);

	encrypt(msg);

	printf("Encrypted : %s\n", msg);

	getch();
	return 0;
}