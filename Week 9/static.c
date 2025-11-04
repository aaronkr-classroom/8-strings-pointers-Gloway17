// static.c
#include <stdio.h>

void Test1() { // 지역 변수
	int data1 = 0;
	printf("%d, ", data1++);
}

void Test2() { // static 변수++
	static int data2 = 0;
	printf("%d, ", data2++);
}

void Test3() { // ++static 변수
	static int data3 = 0;
	printf("%d, ", ++data3);
}

int main() {
	printf("Test1():\n");
	for (int i = 0; i < 5; i++) Test1();
	printf("\n");

	printf("Test2():\n");
	for (int i = 0; i < 5; i++) Test2();
	printf("\n");

	printf("Test3():\n");
	for (int i = 0; i < 5; i++) Test3();
	printf("\n");

	return 0;
}