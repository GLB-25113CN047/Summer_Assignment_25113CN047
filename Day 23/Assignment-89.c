#include<stdio.h>
int main()
{
    char s[100];
    printf("Enter the String s:");
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
        if(c==1)
        {
            printf("%c",s[i]);
            break;
        }
    }
    return 0;
}