// swap.c
#include <stdio.h>

void swap_val(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap_ptr(int* pa, int* pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main() {
	int start = 96,
		end = 5;

	printf("Swap Value:\n");
	printf("before: start = %d, end = %d\n", start, end);
	if (start > end) swap_val(start, end);
	printf("after: start = %d, end = %d\n", start, end);

	printf("\nSwap Pointer:\n");
	printf("before: start = %d, end = %d\n", start, end);
	if (start > end) swap_ptr(&start, &end);
	printf("after: start = %d, end = %d\n", start, end);

	return 0;
}