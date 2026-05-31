#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter the Number n:");
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10){
        sum=sum+(i%10)*(i%10)*(i%10);
    }
    printf("Arm")
}