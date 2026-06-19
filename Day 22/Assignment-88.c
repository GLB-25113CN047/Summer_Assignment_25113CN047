#include<stdio.h>
int main()
{
    char s[100];
    printf("Enter the character s:");
    fgets(s,100,stdin);
    for(int i=0;s[i]!=0;i++)
    {
        if(s[i]!=' ')
        {
            printf("%c",s[i]);
        }
    }
    return 0;
}