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
    printf("%d",count);
    return 0;
}