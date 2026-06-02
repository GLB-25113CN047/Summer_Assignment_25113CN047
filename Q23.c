#include<stdio.h>
int main(){
    int c=0;
    int n;
    printf("Enter the NUmbr n");
    scanf("%d",&n);
    while(n>0){
        if(n%2==1){
            c++;
        }
        n=n/2;
    }
    printf("%d",c);
    return 0;
}