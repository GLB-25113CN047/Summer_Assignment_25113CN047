#include<stdio.h>
int main(){
    int a[100];
    int n;
    printf("Enter the Number n:");
    scanf("%d",&n);
    printf("Enter the Array a:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements of Arrayyy:");
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
}