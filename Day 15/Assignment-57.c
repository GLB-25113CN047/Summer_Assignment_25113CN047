#include<stdio.h>
int main(){
    int a[100];
    int n;
    int i;
    printf("Enter the Size of array n:");
    scanf("%d",&n);
    printf("Enter the Array a:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c=a[0];
    for(int j=n-1;j>=0;j--){
        printf(" %d",a[j]);
    }
    return 0;
}