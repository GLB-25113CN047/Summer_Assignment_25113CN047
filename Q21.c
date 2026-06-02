#include<stdio.h>
int main(){
    int n;
    int m=1;
    int b=0;
    printf("Enter the Number n:");
    scanf("%d",&n);
    while(n>0){
        b=b+(n%2)*m;
        m=m*10;
        n=n/2;
    }
   printf("Binary %d",b);
   return 0;
}