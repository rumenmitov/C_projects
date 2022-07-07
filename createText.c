#include <stdio.h>
#include <stdlib.h>

int main() {

	char text[250];
	printf("Enter text:\n");
	fgets(text, 250, stdin);

	FILE *myDiary = fopen("myDiary.txt", "a");
	fprintf(myDiary, "%s\n", text);
	fclose(myDiary);
	printf("\nText appended successfully!\n");
}
