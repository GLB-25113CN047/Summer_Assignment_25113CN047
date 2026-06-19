#include<stdio.h>
int main(){
    int n;
    char s[100];
    int count=1;
    printf("Enter the Character s:");
    fgets(s,100,stdin);
    for(int i=0;s[i]!=0;i++){
        if(s[i]==' ')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}