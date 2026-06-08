#include<stdio.h>
int fib(int a,int b ,int n,int c){
    for(int i=0;i<=n;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return a;
}
int main(){
    int a=0,b=1;
    int n,c;
    printf("Enter the Number n:");
    scanf("%d",&n);
    printf("%d",fib(a,b,n,c));
}