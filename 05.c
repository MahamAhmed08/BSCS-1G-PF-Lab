#include<stdio.h>

int main()
{
    int s1, s2, s3;
    
    printf("Enter length of side 1: ");
    scanf("%d", &s1);
    printf("Enter length of side 2: ");
    scanf("%d", &s2);
    printf("Enter length of side 3: ");
    scanf("%d", &s3);
   
    if((s1+s3>s2) && (s1+s2>s3) && (s2+s3>s1))
    {
       printf("its valid triangle\n");
       if(s1==s2 && s2==s3)
       {
        printf("Its Equilateral triangle");
       } 
       else if(s1==s2 || s1==s3 || s2==s3)
       {
        printf("Its Isosceles triangle");
       }
       else
       {
        printf("Its Scalene triangle");
       }
    }
    else
    {
        printf("Invalid triangle");
    }
}