#include<stdio.h>
int main()
{
    int b=50000;
    int choice;
    int amt;
    printf(" 1-Check Balance\n");
    printf(" 2-Deposit money\n");
    printf(" 3-Withdraw Money\n");
    printf(" 4-Exit;");
    printf("Enter the choice press 1,2,3,4:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Balance:%d",b);
        break;
        case 2:
        printf("Enter the Money to deposit:");
        scanf("%d",&amt);
        b=b+amt;
        printf("The Balace after Adding the money is %d",b);
        break;
        case 3:
        printf("Enter the amount to withdrawl:");
        scanf("%d",&amt);
        b=b-amt;
        printf("The balance after the withdrawl is %d",b);
        break;
        case 4:
        printf("Thank You for Visiting our bank ATM");
        break;
        default:
        printf("please enter thhe valid choice");
    }
    return 0;
}