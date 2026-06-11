#include<stdio.h>
int main(){
    int a[100];
    int n;
    printf("Enter the size of array n:");
    scanf("%d",&n);
    printf("Enter the Array a:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int l=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>l){
            l=a[i];
        }
    }
    int sl=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>sl&&a[i]!=l){
            sl=a[i];
        }
    }
    printf("scond largest=%d",sl);
    return 0;
}