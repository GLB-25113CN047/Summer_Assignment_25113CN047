#include<stdio.h>
int main(){
    int a[100];
    int n;
    int j=0;
    printf("Enter the size of array n:");
    scanf("%d",&n);
    printf("Enter the Array a:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            a[j]=a[i];
            j++;
        }
    }
    while(n>j){
        a[j]=0;
        j++;
    }
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
}