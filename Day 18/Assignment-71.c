#include<stdio.h>
int main(){
    int a[100];
    int n;
    int t;
    int l,m,h;
    int f=0;
    printf("Enter the size of array n:");
    scanf("%d",&n);
    printf("Enter the array a:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the Target t:");
    scanf("%d",&t);
    l=0;
    h=n-1;
    while(l<=h){
        m=(l+h)/2;
        if(a[m]==t){
            printf("Element founded at %d",m+1);
            f=1;
            break;
        }
        else if(a[m]<t){
            l=m+1;
        }
        else{
            h=m-1;
        }
    }
    if(f==0){
        printf("Item not founded");
    }
}