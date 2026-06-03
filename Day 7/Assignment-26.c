#include<stdio.h>
int f(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    return f(n-1)+f(n-2);
}
int main(){
    int n;
    printf("Enter thw Number n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf(" %d",f(i));
    } 
}
