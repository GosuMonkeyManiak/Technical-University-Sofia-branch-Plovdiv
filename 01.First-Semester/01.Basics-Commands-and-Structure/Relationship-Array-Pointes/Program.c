#include <stdio.h>

int main() {

	int arr[4] = { 2, 3, 4, 5 };

	printf("%p\n", &arr[1]);
	printf("%p", arr + 1);
	return 0;
}