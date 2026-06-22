#include<stdio.h>
int main()
{
    char s[100];
    char ss[100];
    int l1=0,l2=0;
    printf("Enter first word s:");
    scanf("%s",s);
    printf("Enter sec wrd ss:");
    scanf("%s",ss);
    for(int i=0;s[i]!=0;i++)
    {
        l1++;
    }
    for(int i=0;ss[i]!=0;i++)
    {
        l2++;
    }
    if(l1>l2)
        printf("Longest word is %s",s);
    else
        printf("Longest word is %s",ss);
    return 0;
}