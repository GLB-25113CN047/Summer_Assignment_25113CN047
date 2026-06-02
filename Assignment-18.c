#include<stdio.h>
int main(){
    int n;
    int s=0;
    printf("Enter the Number n:");
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10){
        int f=1;
        for(int j=1;j<=i%10;j++){
            f=f*j;
        }
        s=s+f;
    }
    if(s==n) printf("The Number is Strong %d",s);
    else printf("The Number is not strong");
    return 0;
}
