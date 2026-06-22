#include<stdio.h>
int main()
{
    char s[100];
    printf("Enter charctwes s:");
    scanf("%s",s);
    for(int i=0;s[i]!=0;i++)
    {
        int f=0;
        for(int j=0;j<i;j++)
        {
            if(s[i]==s[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("%c",s[i]);
        }
    }
    return 0;
}