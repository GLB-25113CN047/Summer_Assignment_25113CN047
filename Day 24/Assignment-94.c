#include<stdio.h>
int main()
{
    char s[100];
    printf("Enter the Character c:");
    scanf("%s",s);
    for(int i=0;s[i]!=0;i++)
    {
        int f=1;
        for(int j=0;s[j]!=0;j++)
        {
            if(s[i]==s[j])
            {
                f++;
            }
        }
         printf("%c%d",s[i],f);
    }
    
}