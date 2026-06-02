#include<stdio.h>
int main(){
    int n,multi=0;
    printf("Enter the Number n :");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("\n%d X %d=%d",n,i,n*i);
    }
    return 0;
}
