#include<stdio.h>
int main()
{
    int c;
    int a;
    int b;
    printf("Please Enter the Valid Choice from 1-5\n");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Divide");
    printf("\n5.Exit\n\n");
    printf("Enter the Number a:");
    scanf("%d",&a);
    printf("Enter the Number b:");
    scanf("%d",&b);
    printf("Enter the Choice 1-5:");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("Addition=%d",a+b);
        break;
        case 2:
        printf("Subtraction=%d",a-b);
        break;
        case 3:
        printf("Multiplication=%d",a*b);
        break;
        case 4:
        printf("Dividision=%d",a/b);
        break;
        case 5:
        printf("Exit");
        break;
        default:
        printf("Please Enter the Valid Choice");
    }
}