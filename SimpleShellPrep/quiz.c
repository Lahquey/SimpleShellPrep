#include <stdio.h>
#include <string.h>
#include<ctype.h>

/*Write a program in c to run a quiz of 5 questions*/


struct quizScore{
	char username[20];
	int score ;
};
void convertToUpperCase(char *str) {
    while (*str) {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

int main(void)
{
	char q1[20], q2[20], q3[20],q4[20],q5[20];
	printf("Welcome to my Quiz App. Let us see how smart you are.\n");

	/*declare structure that will be used to store scores of the users*/
	struct quizScore player1;
	
	/*Get players name*/
	printf("Please enter your username \n");
	scanf("%s\n", player1.username);
	player1.score = 0;

	printf("Q1: what is the Capital City of Ghana? \n");
	scanf("%s", q1);
	convertToUpperCase(q1);
	printf("Q2: what is the Capital City of Angola? \n");
        scanf("%s", q2);
	convertToUpperCase(q2);
	printf("Q3: what is the Capital City of Tanzania? \n");
        scanf("%s", q3);
	convertToUpperCase(q3);
	printf("Q4: what is the Capital City of Togo? \n");
        scanf("%s", q4);
	convertToUpperCase(q4);
	printf("Q5: what is the Capital City of Kenya? \n");
        scanf("%s", q5);
	convertToUpperCase(q5);

	printf("Here is the outcome of your gameplay \n\n");

	/*determine the scores and print the result out to the user */
	if (strcmp(q1, "ACCRA") == 0){
		player1.score +=1;
	}

	else{
		printf("You got question 1 wrong, the answer is Accra \n");
	}
	 if (strcmp(q2, "LUANDA") == 0){
                player1.score +=1;
        }

        else{
                printf("You got question 2 wrong, the answer is Luanda \n");
        }
	 if (strcmp(q1, "DODOMA") == 0){
                player1.score +=1;
        }

        else{
                printf("You got question 3 wrong, the answer is Dodoma \n");
        }
	 if (strcmp(q4, "LOME") == 0){
                player1.score +=1;
        }

        else{
                printf("You got question 4 wrong, the answer is Lome \n");
        }
	 if (strcmp(q5, "NAIROBI") == 0){
                player1.score +=1;
        }

        else{
                printf("You got question 5 wrong, the answer is Nairobi \n");
        }

	/**
	 * Present scores to player
	 * if score 4 or 5 ms--> Congrats, you are a genius
	 * if score 3 and 2 msg ---> Well done, you can do better
	 * if score 1 or 0 msg ----> Poor lil thing, kuja hapa nikupige makofi
	 */

	printf("You scored %d out of the 5 questions. \n", player1.score);
	if (player1.score ==4 || player1.score ==5){
		printf("Congrats %s, you are a genius\n",player1.username);
	}
	else if(player1.score ==2 || player1.score ==3){
		printf("Well done %s,You can do better\n",player1.username);
	}
	else{
		printf("Poor lil thing. %s kuja hapa nikupige makofi! :)",player1.username);
	}

}
