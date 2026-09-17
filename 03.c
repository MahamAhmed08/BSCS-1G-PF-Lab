/*Extend the largest-of-three-numbers example covered in the lab (Example 1) to work for four numbers X,
Y, Z, and W. Use nested if-else statements only (no logical AND/OR operators) to determine and print the
largest value among the four.*/

#include<stdio.h>

int main()
{
    int W, X, Y, Z;
    printf("Enter 1st number: ");
    scanf("%d", &W);
    printf("Enter 2nd number: ");
    scanf("%d", &X);
    printf("Enter 3rd number: ");
    scanf("%d", &Y);
    printf("Enter 4th number: ");
    scanf("%d", &Z);
    
    if(W>=X)
    {
        if(W>=Y)
        {
            if(W>=Z)
            {
                printf("The Largest Value is %d",W);
            }
            else{
                printf("The Largest Value is %d",Z);
            }
        }
        else
        {
            if(Y>=Z)
            {
                printf("The Largest number is %d",Y);
            }
            else
            {
                printf("The Largest number is %d",Z);
            }
        }
    }
    else{
        if(X>=Y)
        {
            if(X>=Z)
            {
                printf("The Largest number is %d",X);
            }
            else
            {
                printf("The Largest number is %d",Z);
            }
        }
        else{
                printf("The Largest number is %d",Y);

        }
    }
}