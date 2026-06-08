#include<stdio.h>
int pal(int n,int p,int rev){
    for(int i=n;i>0;i=i/10){
        rev=rev*10+(i%10);
    }
    return rev;
}
int main(){
    int n;
    int rev=0;
    int p=0;
    printf("Enter the Number n:");
    scanf("%d",&n);
    if(pal(n,p,rev)==n) printf("This is palindrome");
    else printf("This is not palindrome");
}
