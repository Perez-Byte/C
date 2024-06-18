#include <stdio.h>
#include <string.h>

int sec(char * word) {
	int s = 0;
	for(int i = 0; i < strlen(word); i++) {
		if(word[i] == ' ') {
			s++;
		}
	}
	return s + 1;
}

int main(void) {
	char *a = "This was CS50";
	printf("%d\n", sec(a));
}
