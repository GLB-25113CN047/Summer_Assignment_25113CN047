#include<stdio.h>
int main(){
    int n,d,s=0;
    printf("Enter the Number n :");
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10){
        d=i%10;
        s=s+d;
    }
    printf("Sum of Digit is %d",s);
    return 0;
}