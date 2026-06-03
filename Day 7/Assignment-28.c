#include<stdio.h>
int re=0;
int r(int n){
    if(n==0){
        return re;
    }
    re=re*10+(n%10);
    return r(n/10);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",r(n));
    return 0;
}