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
        break;

        case 4:
        printf("This is the Fibonacci Series");
        break;

        case 2:
        printf("This is the Armstrong Logic");
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
            printf("This case contains the even number");
            break;

        default:
        printf("choice is invalid");
    }

    return 0;



}
