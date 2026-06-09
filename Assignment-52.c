#include<stdio.h>
int main(){
    int n;
    int a[100];
    int e=0;
    int o=0;
    printf("Enter the Number size of n:");
    scanf("%d",&n);
    printf("Enter the Array a:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            e++;
        }
        else if(a[i]%2!=0){
            o++;
        }
    }
    printf("The Evens are %d",e);
    printf("\nthe Odds are %d",o);
    return 0;
}