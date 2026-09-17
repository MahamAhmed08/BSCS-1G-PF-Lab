#include<stdio.h>

int main()
{
    int acc_type, t_transaction;
    printf("Choose account type:\n1-saving\n2-current\nEnter:  ");
    scanf("%d",&acc_type);
    printf("Enter type of your transactions:\n1-Deposit\n2-withdraw\n3-cash balance\nEnter: ");
    scanf("%d",&t_transaction);
    switch(acc_type)
    {
        case 1:
        printf("Its Saving Account\n");
        switch(t_transaction)
        {
            case 1:
            printf("DEPOSIT CASH");
            break;
            case 2:
            printf("WITHDRAW CASH");
            break;
            case 3:
            printf("CASH BALANCE");
            break;
            default:
            printf("Invalid transaction type");
        }
        break;
        case 2:
        printf("Its Current Account \n");
        switch(t_transaction)
        {
            case 1:
            printf("DEPOSIT CASH");
            break;
            case 2:
            printf("WITHDRAW CASH");
            break;
            case 3:
            printf("CASH BALANCE");
            break;
            default:
            printf("Invalid transaction type");
        }
        break;
        default:
        printf("Invalid Account type...");

    }
}