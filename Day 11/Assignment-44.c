#include<stdio.h>
int f(int n,int s){
    for(int i=1;i<=n;i++){
        s=s*i;
    }
    return s;
}
int main(){
    int n;
    int s=1;
    printf("Enter the Number n:");
    scanf("%d",&n);
    printf("Factorial=%d",f(n,s));
}