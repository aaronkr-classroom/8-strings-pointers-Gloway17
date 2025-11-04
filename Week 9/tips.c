// tips.c
#include <stdio.h>

void Test1(short data) {
	short soft = 0;
	soft = data;
	printf("soft = %d\n", soft);

	// tips = 3; // 오류 발생
}

void Test2(short* ptr) {
	short soft = 0;
	soft = *ptr;
	printf("soft = %d\n", soft);

	*ptr = 3;
}

int main() {
	short tips = 5;
	printf("tips = %d\n", tips);

	Test1(tips); // 인자값 변수 값
	printf("Test1 후, tips = %d\n", tips);

	Test2(&tips); // 인자값 변수 주소
	printf("Test2 후, tips = %d\n", tips);

	return 0;
}