#include<stdio.h>
int main(){
    int a[100];
    int n;
    int s=0;
    int t;
    int f;
    printf("Enter the sze of array n:");
    scanf("%d",&n);
    printf("Enter the Array a:");
    for(int i=0;i<n-1;i++){
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    t=n*(n+1)/2;
    f=t-s;
    printf(" %d",f);
    return 0;
}