#include<stdio.h>
int main(){
    int a[100];
    int n;
    int temp;
    printf("Enter the size of array n:");
    scanf("%d",&n);
    printf("Enter the Array a:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
}