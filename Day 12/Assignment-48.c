#include<stdio.h>
int per(int n,int s){
    for(int i=1;i<n;i++){
        if(n%i==0){
            s=s+i;
        }
    }
    return s;
}
int main(){
    int s=0;
    int n;
    printf("Enter the Number n:");
    scanf("%d",&n);
    if (per(n,s)==n) printf("the Number is Perfect");
    else printf("The given number is not perfect");
}