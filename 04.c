#include<stdio.h>
#include<ctype.h>
int main()
{
    int units_consumed;
    float total_bill, rate_perunit=0.0;
    char c_type;
    printf("Enter your connection type(C-commercial, D-domestic): ");
    scanf("%c",&c_type);
    printf("Enter number of units consumed:");
    scanf("%d", &units_consumed);
    c_type=toupper(c_type);

    if(c_type=='D')
    {   printf("\t DOMESTIC BILL SUMMARY\n");
        if(units_consumed>=0 && units_consumed<=100)rate_perunit=5.0;
        else if(units_consumed>100 && units_consumed<=300) rate_perunit=8.0;
        else if(units_consumed>=300) rate_perunit=12.0;
        else printf("Invalid Units...");
        
    }
    else if(c_type=='C')
    {
        printf("\t COMMERCIAL BILL SUMMARY\n");
        if(units_consumed>=0 && units_consumed<=100) rate_perunit=10.0;
        else if(units_consumed>100 && units_consumed<=300) rate_perunit=15.0;
        else if(units_consumed>=300) rate_perunit=20.0;
        else printf("Invalid Units...");  
        }    
        else{
    printf("Invalid connection type...");
    }

    if(rate_perunit>0.0)
    {
    total_bill=units_consumed*rate_perunit;
        printf("TOTAL BILL: %.2f",total_bill);
    }

    return 0;
}