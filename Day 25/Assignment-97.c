#include<stdio.h>
int main(){
    int a[100];
    int n;
    int aa[100];
    int temp;
    int temp2;
    printf("Enter the size of array n:");
    scanf("%d",&n);
    printf("Enter the Array a:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the Second array aa;");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&aa[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(aa[j]>aa[j+1]){
                temp2=aa[j];
                aa[j]=aa[j+1];
                aa[j+1]=temp2;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf(" %d",aa[i]);
    }
}