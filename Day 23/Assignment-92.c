#include<stdio.h>
int main()
{
    char s[100];
    char maxchar;
    int max=0;
    printf("Enter String: ");
    scanf("%s",s);
    for(int i=0;s[i]!=0;i++)
    {
        int c=0;
        for(int j=0;s[j]!=0;j++)
        {
            if(s[i]==s[j])
            {
                c++;
            }
        }
        if(c>max)
        {
            max=c;
            maxchar=s[i];
        }
    }
    printf("max ocuuring = %c",maxchar);
    return 0;
}