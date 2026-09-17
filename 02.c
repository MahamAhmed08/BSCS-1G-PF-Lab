/*A cinema charges different ticket prices based on age and day of the week. Take the customer's age and a
character for the day ('W' for weekday, 'H' for weekend/holiday) as input. Using nested if-else, if the age is
less than 12 or greater than 60, apply a discounted price; within that, check the day to decide between the

weekday-discount price and the weekend-discount price. If the age is between 12 and 60, do the same day-
based check but using the regular weekday and weekend prices. Print the final ticket price.
*/

#include<stdio.h>

int main()
{
    int age;
    char day;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter character (W-weekday, H-holiday): ");
    scanf(" %c", &day);

    if(age<12 || age>60)
    {
        if ( day=='W' || day=='w')
        {
            printf("Weekday discounted price...");
        }
        else if (day=='H' || day=='h')
        {
            printf("Weekend discounted price...");
        }
        else
        {
            printf("error in chaarchter...");
        }
    }
    else if( age>=12 || age<=60)
    {
        if ( day=='W' || day=='w' )
        {
            printf("Weekday regular price...");
        }
        else if(day=='H' || day=='h')
        {
            printf("Weekend Regular Price...");
        }
        else{
            printf("error inn character");
        }
    }
    else
    {
        printf("ERROR IN CHARACHTER");
    }
}