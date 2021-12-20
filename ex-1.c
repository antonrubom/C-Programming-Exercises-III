#include <stdio.h>

int main() {
	int in;
	int temp;
	int a = 0;

	printf("Enter an integer: ");
	scanf("%d", &in);

	while ((in / 10) > 0.1 || (in / 10) == 0.1) {
		temp = in / 10;
		a++;
		in = temp;
	}
	printf("%d", a + 1);
	return 0;
}