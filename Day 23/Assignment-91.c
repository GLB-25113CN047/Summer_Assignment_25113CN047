#include<stdio.h>
int main()
{
    char s[100];
    char n[100];
    int c=0;
    int l=0;
    printf("Enter the String s:");
    scanf("%s",s);
    printf("Enter the String n:");
    scanf("%s",n);
    for(int i=0;s[i]!=0;i++)
    {
        l++;
    }
    for(int i=0;s[i]!=0;i++)
    {
        for(int j=0;n[j]!=0;j++)
        {
            if(s[i]==n[j])
            {
                c++;
                break;
            }
        }
    }
    if(c==l)
    {
        printf("This is anagrn");
    }
    else
    {
        printf("not anagrn");
    }
    return 0;
}