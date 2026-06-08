#include<stdio.h>
int s(int a,int b){
    if (a>b) return a;
    else return b;
}
int main(){
    int a,b;
    printf("Enter the Number a:");
    scanf("%d",&a);
    printf("Enter the Number b:");
    scanf("%d",&b);
    int gr=s(a,b);
    printf("Greatest Number=%d",gr);
}
