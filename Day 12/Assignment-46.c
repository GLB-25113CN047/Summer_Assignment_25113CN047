#include<stdio.h>
int a(int n,int s){
    for(int i=n;i>0;i=i/10){
        s=s+(i%10)*(i%10)*(i%10);
    }
    return s; 
    
}
int main(){
    int n;
    int s=0;
    printf("Enter the Number n:");
    scanf("%d",&n);
    if(a(n,s)==n) printf("The Given Number is Armstrong Number");
    else printf("The given number is not armstrong Number");
}