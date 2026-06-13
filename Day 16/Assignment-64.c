#include<stdio.h>
int main(){
    int a[100];
    int n;
    printf("Enter size of array n:");
    scanf("%d",&n);
    printf("Enter Array a:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int t=0;
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                t=1;
                break;
            }
        }
        if(t==0){
            printf("%d ",a[i]);
        }
    }
    return 0;
}