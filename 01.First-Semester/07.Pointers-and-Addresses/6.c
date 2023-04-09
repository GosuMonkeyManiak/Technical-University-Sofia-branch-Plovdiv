#include <stdio.h>

void findOnlyPositiveNumbers(int *pointer, int length, int *out);

int main() {
	int n;

	do {
		printf("n = ");
		scanf("%d", &n);

	} while (n > 20);

	int a[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	printf("b = ");

	int b[n];

	findOnlyPositiveNumbers(a, n, b);

	for (int i = 0; i < n; i++) {
		if (b[i] != 0) {
			printf("%d ", b[i]);
		}
	}
}

void findOnlyPositiveNumbers(int *pointer, int length, int *out) {
	for (int i = 0; i < length; i++) {
		pointer += i;
		out += i;

		if (*pointer > 0) {
			*out = *pointer;
		} else {
			*out = 0;
		}
	}
}