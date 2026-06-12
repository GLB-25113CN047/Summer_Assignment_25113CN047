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
    int t=a[0];
    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=t;
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
}