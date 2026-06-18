#include<stdio.h>
int main()
{
    char s[100];
    printf("Enter the small Character s:");
    scanf("%s",s);
    for(int i=0;s[i]!=0;i++)
    {
        printf("%c",s[i]-32);
    }    
    return 0;
}