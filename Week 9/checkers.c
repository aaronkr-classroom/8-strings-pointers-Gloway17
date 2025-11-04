// checkers.c
#include <stdio.h>
#include <stdlib.h>

#define ROWS 8
#define COLS 8

// 판 초기화
void init_board(int board[ROWS][COLS]) {
	// 모든 위치에서 0으로 채웁니다.
	// 0 = 아무것도 없음.
	/*for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			board[i][j] = 0;
		}
	}*/
	memset(board, 0, sizeof(board));
}

void setup_board(int board[ROWS][COLS]) {
	// 1 = 빨강, 2 = 검정
	// 빨강은 항상 위에, 검정은 항상 밑에,
	// 빨강 (1) 말 배치 (0~2 행)
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < COLS; j++) {
			// 교대로 배치된 사각형에만 놓기
			if ((i + j) % 2 == 1) {
				board[i][j] = 1; // 빨강
			}
			else {
				board[i][j] = 0; // 빈 칸
			}
		}
	}

	// 검정 (2) 말 배치 (5~7 행)
	for (int i = 5; i < 8; i++) {
		for (int j = 0; j < COLS; j++) {
			// 교대로 배치된 사각형에만 놓기
			if ((i + j) % 2 == 1) {
				board[i][j] = 2; // 검정
			}
			else {
				board[i][j] = 0; // 빈 칸
			}
		}
	}

	// 중간 3~4 행은 빈 칸으로 설정
	for (int i = 3; i < 5; i++) {
		for (int j = 0; j < COLS; j++) {
			board[i][j] = 0; // 빈 칸
		}
	}
}

void print_board(int board[ROWS][COLS]) {
	// 열 숫자 출력
	printf("\n  ");
	for (int j = 0; j < COLS; j++) {
		printf("%d ", j);
	}
	printf("\n");

	// 윗 테두리 출력
	printf("  ");
	for (int j = 0; j < COLS; j++) {
		printf("--");
	}
	printf("\n");

	// 판 출력하기
	for (int i = 0; i < ROWS; i++) {
		printf("%d|", i); // 행 숫자 출력
		for (int j = 0; j < COLS; j++) {
			if (board[i][j] == 0) {
				printf(". ");
			}
			else if (board[i][j] == 1) {
				printf("o "); // 빨간 피스
			}
			else if (board[i][j] == 2) {
				printf("x ");
			}
		}
		printf("|\n");
	}

	// 밑 테두리 출력하기
	printf("  ");
	for (int j = 0; j < COLS; j++) {
		printf("--");
	}
	printf("\n");
}

int main() {
	int noard[ROWS][COLS];

	init_board(noard);
	setup_board(noard);
	print_board(noard);
}