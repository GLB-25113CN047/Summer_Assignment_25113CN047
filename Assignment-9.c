#include<stdio.h>
int main(){
    int p=0;
    int n;
    printf("Enter the Number N :");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(n%i==0){
            p++;        }
    }
    if(p==1){
        printf("The given Number is prime");
    }
    else{
        printf("The given Number is Not Prime");
    }
    return 0;

}
