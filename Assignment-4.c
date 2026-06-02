#include<stdio.h>
int main(){
    int n,c=0;
    printf("Enter the Number N:");
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10){
        c++;
    }
    printf("Counted Numbers are %d",c);
    return 0;
}
