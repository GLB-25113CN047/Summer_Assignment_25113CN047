#include<stdio.h>
int main()
{
    int s=0;
    int a;
    printf("Q1. Where GL Bajaj College Located in UP ?\n");
    printf("1.Jhansi\n");
    printf("2.Agra\n");
    printf("3.Greater Noida\n");
    printf("4.Kanpur\n");
    printf("Enter Your Choice:");
    scanf("%d",&a);
    if(a==3){
        s++;
    }
    printf("Q2.Where Inida Gate Is Located in India ?\n");
    printf("1.Tamil Nadu\n");
    printf("2.New Delhi\n");
    printf("3.Bihar\n");
    printf("4.West Bengal\n");
    printf("Enter Your Choce:");
    scanf("%d",&a);
    if(a==2)
    {
        s++;
    }
    printf("Your Total Score is %d",s);
    return 0;
}