//var_glgame.c
#include <stdio.h>
#include <stdlib.h> // rand(), srand()
#include <time.h> 
// time() -> 1970�� 1�� 1�� 00:00���� ������� ms

// ���� ����
int randNum;

// ���� �ʱ��� �Լ�
void gamelnit() {
	srand(time(0));
	randNum = rand() % 10 + 1; // (0~9) + 1 = 1 ~ 10

}

// ���� ���� �Լ�
void gamePlay() {
	// ���� ����
	int guess = 0,
		count = 0,
		allowed = 5; // 5�� ������ �� �� ����

	printf("Guess the number (1~10) : ");

	do {
		scanf_s("%d", &guess);
		count++;
		if (guess == randNum) {
			printf("Good guess You win");
			break;
		}
		else if (guess < randNum) {
			printf("To low! Try again!");
		}
		else if (guess > randNum) {
			printf("To high! Try again!");
		}
	} while (count != allowed ); // ���� Ƚ�� 5�� ����

	if (count == allowed)
	printf("Too many guesses! You lose!");
}

int main(void) {
	gamelnit();
	gamePlay();

	getch();
	return 0;
}