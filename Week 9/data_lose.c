// data_loss.c
#include <stdio.h>

int main() {
	unsigned int x = 0x12345678; // 16Áø¼ö, 4bytes
	long lg = 2147483648; // 4,294,967,296 = 2^32
	double xl = 123456789123.456789;

	printf("Unit: %d\n", x);
	printf("Uint -> short: %d\n", (short)x);
	printf("Uint -> char: %d\n", (char)x);

	printf("Long: %d\n", lg);
	printf("Long -> int: %d\n", (int)lg);
	printf("Long -> char: %d\n", (char)lg);

	printf("Dbl: %lf\n", xl);
	printf("Dbl -> long: %d\n", (long)xl);
	printf("Dbl -> short: %d\n", (short)xl);

	return 0;
}