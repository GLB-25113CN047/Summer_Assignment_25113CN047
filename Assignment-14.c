#include<stdio.h>
int main(){
    int a=0,b=1;
    int n,c;
    printf("Enter the Number n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("Nth Fibo Numbr %d",a);
    return 0;
}
