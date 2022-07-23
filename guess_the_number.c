// C program to generate a random number
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int again = 0;
    while (again == 0)
    {
        int number, guess, count = 1;

        srand(time(0));
        number = rand() % 100 + 1;
        printf("A number is generated. Start your gussings.\n");

        do
        {
            printf("Guess the number between 1 to 100: ");
            scanf("%d", &guess);
            if (guess > number)
            {
                printf("Lower number please!\n");
            }
            else if (guess < number)
            {
                printf("Higher number please!\n");
            }
            else
            {

                printf("The number is %d\n", number);
                printf("You gussed the number in %d attempts.\n", count);
            }
            count++;

        } while (guess != number);

        printf("Do you want to play again? (Yes -> 0, No -> 1): ");
        scanf("%d", &again);
    }

    printf("Thank you! Play again.\nWith love from JoydebRana635");

    return 0;
}
