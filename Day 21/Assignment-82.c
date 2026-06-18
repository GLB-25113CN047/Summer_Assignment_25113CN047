#include<stdio.h>
int main(){
    int n;
    char s[100];
    int count=0;
    printf("Enter the Character s:");
    scanf("%s",s);
    for(int i=0;s[i]!=0;i++)
    {
        count++;
    }
    for(int i=count-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    return 0;
}