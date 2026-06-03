#include<stdio.h>
int f(int n){
    if(n==1)
        return 1;
    return n*f(n-1);
}
int main(){
    int n;
    printf("Enter the Number n:");
    scanf("%d",&n);
    printf("Factorial=%d",f(n));
    return 0;
}