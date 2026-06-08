#include<stdio.h>
int s(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    printf("Enter the Number a:");
    scanf("%d",&a);
    printf("Enter the Number b:");
    scanf("%d",&b);
    int sum=s(a,b);
    printf("Sum=%d",sum);
}
