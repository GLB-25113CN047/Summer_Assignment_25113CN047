#include<stdio.h>
int main(){
    int s=0;
    int n;
    printf("Enter the Number n:");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            s=s+i;
        }
    }
    if(s==n) printf("The Number was perfect number %d",s);
    else printf("the number is not perfct number");
    return 0;
}