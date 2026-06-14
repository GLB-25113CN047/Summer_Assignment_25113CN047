#include<stdio.h>
int main(){
    int a[100];
    int b[100];
    int n;
    printf("Enter the Size of array n:");
    scanf("%d",&n);
    printf("Enter the Array a:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the Array b;");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int j=0;j<n;j++){
        printf("%d ",a[j]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    return 0;
}