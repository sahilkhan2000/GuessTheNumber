#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand()%100 + 1;   //Generates random number between 1 and 100
    //printf("The Number is %d\n", number);
    do
    {
        printf("Enter a Number between 1 to 100\n");
        scanf("%d",&guess);
        if (guess > number)
        {
            printf("Enter a lesser number please!\n");            
        }
        else if (guess < number)
        {
            printf("Enter a higher number please!\n");
        }
        else
        {
            printf("Voila! You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (number != guess);
    
}
