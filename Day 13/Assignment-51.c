#include<stdio.h>
int main(){
    int n;
    int a[100];
    printf("Enter the Number size of n:");
    scanf("%d",&n);
    printf("Enter the Array a:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int l=a[0];
    int s=a[0];
    for(int i=0;i<n;i++){
        if (a[i]>l){
            l=a[i];
        }
        else if(a[i]<s){
            s=a[i];
        }
    }
    printf("Largest=%d",l);
    printf("\nSmallest=%d",s);
    return 0;
}