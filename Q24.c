#include<stdio.h>
int main(){
    int x,n;
    int p=1;
    printf("Enter the Power n :");
    scanf("%d",&n);
    printf("Enter the Number x :");
    scanf("%d",&x);
    for(int i=1;i<=n;i++){
        p=p*x;
    }
    printf("Power :%d",p);
    return 0;
}