#include<stdio.h>
int main(){
    int sum;
    int n;
    printf("Enter the Number n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        sum=0;
        for(int j=i;j>0;j=j/10){
            sum=sum+(j%10)*(j%10)*(j%10);
        }
        if(sum==i){
            printf(" %d",i);
        }
    }
}