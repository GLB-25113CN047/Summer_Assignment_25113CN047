#include<stdio.h>
int main(){
    int n;
    int i,j;
    printf("Enter the Number N:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            printf("\nThe given number is prime ",i);
        }
        else{
            printf("\nThe given number is not prime");
        }
    }
    
    return 0;
}