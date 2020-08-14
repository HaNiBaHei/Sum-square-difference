#include<stdio.h>
#include<math.h>
int main() {
	long num, x = 0, y = 0, i, j;
	for (i = 1; i <= 100; i++) {
		x = x + pow(i, 2);
	}
	for (j = 1; j <= 100; j++) {
		y = y + j;
	}
	num = pow(y, 2) - x;
	printf("%d ", num);
}