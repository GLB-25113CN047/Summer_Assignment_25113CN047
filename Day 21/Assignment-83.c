#include<stdio.h>
int main()
{
    char s[100];
    int v=0;
    int c=0;
    printf("Enter the Character s:");
    scanf("%s",&s);
    for(int i=0;s[i]!=0;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'
        ||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            v++;
        }
        else
        {
            c++;
        }
    }
    printf("Vovels=%d",v);
    printf("\nconsonents=%d",c);
    return 0;
}