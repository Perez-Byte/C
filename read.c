#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWords(char *word) {
	int w = 0;
	for(int i = 0; i < strlen(word); i++) {
		if(word[i] == ' ') {
			w++;
		}
	}
	return w + 1;
}

int countSentences(char *sentence) {
	int s = 0;
	for(int i = 0; i < strlen(sentence); i++) {
		if(sentence[i] == '.' || sentence[i] == '!' || sentence[i] == '?' ) {
			s++;
		}
	}
	return s;
}

int countLetters(char *letter) {
	int l = 0;
	for(int i = 0; i < strlen(letter); i++) {
		if(isalpha(letter[i])) {
			l++;
		}
	}
	return l;
}

int main(void) {
	char *a = "Congratulations! Today is your day. You're off to Great Places! You're off and away!";
	float L = (float) countLetters(a) / (float)  countWords(a) * 100;
	float S = (float) countSentences(a) / (float)  countWords(a) * 100;

	int index = 0.0588 * L - 0.296 * S - 15.8;

	if(index < 1) {
		printf("Before 1 grade\n");
	} else if (index >= 16) {
		printf("16+ grade\n");
	} else {
		printf("Grade: %i\n", index);
	}
}
