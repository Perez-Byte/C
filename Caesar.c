#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int args, char *argv[]) {
	if(args != 2) {
		printf("Usage: ./caesar key\n");
		return 1;
	}

	for(int i = 0; i < strlen(argv[1]); i++) {
		if(!isdigit(argv[1][i])) {
			printf("Usage: ./caesar key(integer, bitch)\n");
			return 2;
		}
	}

	int key = atoi(argv[1]);

	char *plaintext = "This was CS50\n";

	printf("cripto text: ");

	for(int i = 0; i < strlen(plaintext); i++) {
		if (isupper(plaintext[i])) {
			printf("%c", (plaintext[i] - 65 + key) % 26 + 65);
		} else if (islower(plaintext[i])) {
			printf("%c", (plaintext[i] - 97 + key) % 26 + 97);
		} else {
			printf("%c", plaintext[i]);
		}	
	}
}
