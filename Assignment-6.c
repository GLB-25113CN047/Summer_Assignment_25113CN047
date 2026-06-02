#include<stdio.h>
int main(){
    int n,rev=0;
    printf("Enter the Number N :");
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10){
        rev=rev*10+(i%10);
    }
    printf("Reversed Number is %d",rev);
    return 0;

}
