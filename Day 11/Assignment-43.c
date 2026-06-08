#include<stdio.h>
int prime(int n,int p){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            p++;
            
        }
    }
    return p;
}
int main(){
    int n;
    int p=0;
    printf("Enter the Number n:");
    scanf("%d",&n);
    if(prime(n,p)==2) printf("The Number is Prime");
    else printf("The Number is not prime");
}