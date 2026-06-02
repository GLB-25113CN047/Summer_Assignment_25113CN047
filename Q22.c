#include<stdio.h>
int main(){
    int n;
    int m=1,d=0;
    printf("Enter the Number n:");
    scanf("%d",&n);
    while(n>0){
        d=d+(n%10)*m;
        m=m*2;
        n=n/10;
    }
    printf("Decimal %d",d);
    return 0;
}