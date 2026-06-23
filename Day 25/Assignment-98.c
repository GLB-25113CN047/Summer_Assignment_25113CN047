#include<stdio.h>
int main()
{
    char s[100];
    char ss[100];
    printf("Enter the Character s:");
    scanf("%s",s);
    printf("Enter the Characters ss:");
    scanf("%s",ss);
    for(int i=0;s[i]!=0;i++)
    {
        for(int j=0;ss[j]!=0;j++)
        {
            if(s[i]==ss[j])
            {
                printf("%c",s[i]);
                break;
            }
        }
    }
    return 0;
}