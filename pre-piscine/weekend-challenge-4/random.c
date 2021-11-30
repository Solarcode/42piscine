#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
	
	srand(time(NULL));
	int range = atoi(argv[1]);

	int guess;
	int rand_num = (rand() % (range + 1));

	printf("Guess the number in C!\n");
	
	do {
		scanf(" %d", &guess);
		if (guess > rand_num){
			printf("Lower, try again!\n");
		}
		else if (guess < rand_num){
			printf("Higher, try again!\n");
		}


	} while (guess != rand_num);
	
	printf("Correct, the number is %d\n", rand_num);
}
