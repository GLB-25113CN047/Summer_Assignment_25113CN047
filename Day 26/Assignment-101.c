#include<stdio.h>
int main()
{
    int s=41;
    int g;
    printf("Enter the Number under 1-100:");
    scanf("%d",&g);
    if(s==g)
    {
        printf("Numebr Guessed");
    }
    else
    {
        printf("Wrong Number");
    }
    return 0;
}