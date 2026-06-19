#include<stdio.h>
int main(){
    char s[100];
    int c=1;
    printf("Enter the Character s:");
    scanf("%s",s);
    for(int i=0;s[i]!=0;i++)
    {
        int c=1;
        for(int j=i+1;s[j]!=0;j++)
        {
            if(s[i]==s[j])
            {
                c++;
            }
        }
            printf("%c %d\n",s[i],c);
    }
    return 0;
}