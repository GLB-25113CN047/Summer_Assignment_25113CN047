#include<stdio.h>
int main()
{
    char s[100];
    int count=0;
    int f=1;
    printf("Ente the Charcter s:");
    scanf("%s",s);
    for(int i=0;s[i]!=0;i++)
    {
        count++;
    }
    for(int i=0;i<count/2;i++)
    {
        if(s[i]!=s[count-1-i])
        {
            f=0;
            break;
        }
    }
    if(f==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}