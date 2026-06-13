#include<stdio.h>
int main(){
    int a[100];
    int n;
    printf("Enter the siz of array n:");
    scanf("%d",&n);
    printf("Enter the array a:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int m=0;
    int e;
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                c++;
            }
        }
        if(c>m){
            m=c;
            e=a[i];
        }
    }
    printf("elment=%d",e);
    return 0;
}