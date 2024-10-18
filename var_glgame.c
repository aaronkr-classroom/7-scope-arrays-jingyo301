//var_glgame.c
#include <stdio.h>
#include <stdlib.h> // rand(), srand()
#include <time.h> 
// time() -> 1970년 1월 1일 00:00부터 현재까지 ms

// 전역 변수
int randNum;

// 게임 초기하 함수
void gamelnit() {
	srand(time(0));
	randNum = rand() % 10 + 1; // (0~9) + 1 = 1 ~ 10

}

// 게임 실행 함수
void gamePlay() {
	// 지역 변수
	int guess = 0,
		count = 0,
		allowed = 5; // 5번 추측만 할 수 있음

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
	} while (count != allowed ); // 추측 횟수 5번 제한

	if (count == allowed)
	printf("Too many guesses! You lose!");
}

int main(void) {
	gamelnit();
	gamePlay();

	getch();
	return 0;
}