#include<stdio.h>
int main()
{
    int num =0, choice =0;
    printf("Enter any number");
    scanf("%d",&num);


    printf("choose your choice betweem 1 to 6");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("This case contains the prime number");
        printf("prime numbers are the number which are divisible only by 1 and the number itself");

        break;

        case 4:
        printf("This is the Fibonacci Series");
        printf("This case contains the fibonacci numbers");

        break;

        case 2:
        printf("Armstrong Logic");
        printf("This case checks the Armstrong numbers");
        break;

        case 6:
        printf("This contains the pallindrome logic");
        break;

        case 3:
        printf("Factorial Logic");
        break;

        case 5:
        printf("Reverse of a number");
        break;

        case 7:
            printf("This code is Forked");
            break;

        default:
        printf("choice is invalid");
        break;
    printf("A Random Statement")//Ojas
    }



    return 0;



}
