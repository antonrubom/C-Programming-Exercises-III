#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fPointer;
	fPointer = fopen("output.txt", "r");
	int singleLine[150];

	while(!feof(fPointer)) {
		fgets(singleLine, 150, fPointer);
		puts(singleLine);
		// printf("\n %d", singleLine);
	}

	fclose(fPointer);
	return 0;
}