#include <stdio.h>
#include <stdlib.h>

int main() {
	int eachLine;
	int sum=0, a;
	FILE* fCurrent;
	char buf[256];
	fCurrent = fopen("output.txt", "r");
	while(fscanf(fCurrent,"%d", &eachLine) != EOF) {
	sum = sum + eachLine;
		
	}
// 	fgets(buf, 256, fCurrent);
	// printf("%s\n", eachLine[0]);
	printf("The total is: %d\n", sum);
	fclose(fCurrent);
	return 0;
}