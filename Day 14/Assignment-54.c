#include<stdio.h>
int main(){
    int a[100];
    int n;
    int c=0;
    int key;
    printf("Enter the Size of Array n:");
    scanf("%d",&n);
    printf("Enter the Key:");
    scanf("%d",&key);
    printf("Enter the Array a:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(key==a[i]){
            c++;
        }
    }
    printf("The Frequency:%d",c);
    return 0;
}