#include <stdio.h>
#include <stdlib.h>

//Declare variables
int number, i, j;
int main(void)
{
    //Ask user for input number
    printf("Choose a number: ");
    scanf("%d", &number);
    //Check if number is prime by going through the amount of numbers that can divide into it to equal 0
    for (i=1; i<=number; i++)
    {
        //j keeps count of the amount of times numbers divide the users number to form 0
        if (number%i==0)
        {
            j=j+1;
        }
    }
    //Call from for loop to see if it divides cleanly twice to form 0
    if(j==2)
    {
        printf("This is a prime number");
    }
    //If it doesn't divide cleanlly it is not a prime number
    else
    {
        printf("This is not a prime number");
    }
}
