#include<stdio.h>
int main(){
    int a[100];
    int n;
    int s=0;
    float avg;
    printf("Enter the Number n:");
    scanf("%d",&n);
    printf("Enter the Array a:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    avg=s/n;
    printf("sum=%d ",s);
    printf("\nAvergae=%f",avg);
    return 0;
}