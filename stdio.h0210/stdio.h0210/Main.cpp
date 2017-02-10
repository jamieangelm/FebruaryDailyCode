#include <stdio.h>
int main() {
	char string[10];
	printf("What is your name?");
	fgets(string, 10, stdin);
	printf("%s, you are cool!", string);
	return 0;
}