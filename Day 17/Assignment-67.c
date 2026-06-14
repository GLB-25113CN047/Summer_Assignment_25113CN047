#include<stdio.h>
int main(){
    int a[100];
    int b[100];
    int n;
    int m;
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
    for(int i=0;i<n;i++){
        m=0;
        for(int j=0;j<n;j++){
            if(a[j]==b[i]){
                m=1;
                printf("%d ",a[j]);
                break;
            }
        }
    }
    return 0;
}