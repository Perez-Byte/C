#include <stdio.h>
#include <ctype.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score (char *a) {
	int score = 0;
	for(int i = 0; i < strlen(a); i++) {
		if(islower(a[i])) {
			score += POINTS[a[i] - 97];
		}

		if(isupper(a[i])) {
			score += POINTS[a[i] - 65];
		}
	}
	return score;
}

int main(void) {
	char *player1 = "Computer";
	char *player2 = "Scince";

	int score1 = compute_score(player1);
	int score2 = compute_score(player2);

	if(score1 > score2) {
		printf("Player 1 win!\n");
	} else if (score1 < score2) {
		printf("Player 2 win!\n");
	} else {
		printf("Tie!\n");
	}
}
