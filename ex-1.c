#include <stdio.h>

int main() {
    
	int in, temp, a = 0;

	printf("Enter an integer: ");
	scanf("%d", &in);

    if(in > 0){
        while ((in / 10) > 0.1 || (in / 10) == 0.1) {
		temp = in / 10;
		a++;
		in = temp;
	}
    } else {
        while ((in / 10) < -0.1 || (in / 10) == -0.1) {
		temp = in / 10;
		a++;
		in = temp;
	}
    }
    
	printf("%d", a + 1);
	return 0;
}