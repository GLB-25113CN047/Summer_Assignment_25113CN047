#include<stdio.h>
int main(){
    int a[100];
    int n;
    int s;
    printf("Enter the size of array n:");
    scanf("%d",&n);
    printf("Enter the Array a:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);   
    }
    printf("Enter the sum s:");
    scanf("%d",&s);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==s){
                printf("'%d+%d' ",a[i],a[j]);
            }
        }
    }
    return 0;
}    

