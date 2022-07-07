#include <stdio.h>
#include <stdlib.h>

const int abc = 26;
const int targetLength = 5;
const char target[targetLength] = "baker";
char word[ targetLength * 2 - 1] = "_ _ _ _ _";
char usedChar[abc];
int usedCharCounter = 0;
int misses = 0;
int isWinner = 0;
char input;

int userGuess(char input);

int main(void) {

	printf("Welcome to HANGMAN!\n");
	sleep(1);	
	printf("%s\n", word);
	
	while (isWinner == 0) {
		printf("Your guess: \n");
		scanf(" %c\n", &input);
		printf(" %c\n", input);
		userGuess(input);
		if (misses > 5) {
			printf("You lose! GAME OVER!\n");
			return 0;
		}
	}
	return 0;
}

int userGuess(char input) {
	
	int  isCorrect = 0;

	for (int i = 0; i < abc; i++) {
		if (input == usedChar[i]) {
			printf("Letter was used already!\n");
			return 0;
		
		}
	}

	usedChar[usedCharCounter] = input;
	usedCharCounter++;

	for (int i = 0; i < targetLength; i++) {
		
		if (input == target[i]) {
			word[ i * 2 ] = input;
			isCorrect = 1;
		}
	}

	if (isCorrect == 0) {
		misses++;

		if (misses == 0) {
			printf("  _____ \n");
			printf("  |    | \n");
			printf("  | \n");
			printf("  | \n");
			printf("  | \n");
			printf("__|_______ \n");	
		
		} else if (misses == 1) {
			printf("  _____ \n");
			printf("  |    | \n");
			printf("  |    0 \n");
			printf("  | \n");
			printf("  | \n");
			printf("__|_______ \n");
		
		} else if (misses == 2) {
			printf("  _____ \n");
			printf("  |    | \n");
			printf("  |    0 \n");
			printf("  |    | \n");
			printf("  | \n");
			printf("__|_______ \n");

		} else if (misses == 3) {
			printf("  _____ \n");
			printf("  |    | \n");
			printf("  |    0 \n");
			printf("  |    | \n");
			printf("  |   / \n");
			printf("__|_______ \n");

		} else if (misses == 4) {
			printf("  _____ \n");
			printf("  |    | \n");
			printf("  |    0 \n");
			printf("  |    | \n");
			printf("  |   / \\ \n");
			printf("__|_______ \n");

		} else if (misses == 5) {
			printf("  _____ \n");
			printf("  |    | \n");
			printf("  |    0 \n");
			printf("  |  / | \n");
			printf("  |   / \\ \n");
			printf("__|_______ \n");

		} else {
			printf("  _____ \n");
			printf("  |    | \n");
			printf("  |    0 \n");
			printf("  |  / | \\ \n");
			printf("  |   / \\ \n");
			printf("__|_______ \n");
	
		}


	} else {
		
		if (word == "b a k e r") {
			isWinner = 1;
		}
	}

	printf(" The word is %s \n", word);
	return 0;
}
