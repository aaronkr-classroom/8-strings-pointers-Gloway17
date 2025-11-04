// birthday.c
#include <stdio.h>

int main() {
	short birthday;
	short* ptr;
	ptr = &birthday;

	// 변수 정의
	int intVar = 42;
	float floatVar = 3.1415972;
	char charVar = 'A';
	double doubleVar = 9.81;

	// 포인터 정의
	int* intPtr = &intVar;
	float* floatPtr = &floatVar;
	char* charPtr = &charVar;
	double* doublePtr = &doubleVar;

	// %p 형식은 메모리 주소를 16진수 형태로 출력
	printf("birthday 변수의 주소는 %p 입니다.\n", ptr);

	// 변수 값과 주소 출력.
	printf("intVar 변수 값: %8d, \t 주소: %p\n", *intPtr, intPtr);
	printf("intVar 변수 값: %f, \t 주소: %p\n", *floatPtr, floatPtr);
	printf("intVar 변수 값: %8c, \t 주소: %p\n", *charPtr, charPtr);
	printf("intVar 변수 값: %lf, \t 주소: %p\n", *doublePtr, doublePtr);

	return 0;
}