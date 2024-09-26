#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;
    srand(time(0));  // Seed random number generator
    computer = rand() % 3 + 1;  // Random choice for computer (1=Rock, 2=Paper, 3=Scissors)

    printf("Choose: 1. Rock  2. Paper  3. Scissors\n");
    scanf("%d", &player);

    char *choices[] = {"Rock", "Paper", "Scissors"};
    printf("You chose: %s\n", choices[player - 1]);
    printf("Computer chose: %s\n", choices[computer - 1]);

    if (player == computer)
        printf("It's a tie!\n");
    else if ((player == 1 && computer == 3) || (player == 2 && computer == 1) || (player == 3 && computer == 2))
        printf("You win!\n");
    else
        printf("Computer wins!\n");

    return 0;
}
