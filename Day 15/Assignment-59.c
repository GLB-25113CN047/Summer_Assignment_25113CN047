#include<stdio.h>
int main(){
    int a[100];
    int n;
    printf("Enter the size of array n:");
    scanf("%d",&n);
    printf("Enter the array a:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int t=a[n-1];
    for(int i=n-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=t;
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
}