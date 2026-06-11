#include<stdio.h>
int main(){
    int a[100],n;
    printf("Enter the Size of array n:");
    scanf("%d",&n);
    printf("Enter the Array a:;");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("%d ",a[i]);
            }
        }
    }
    return 0;
}