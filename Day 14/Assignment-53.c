#include<stdio.h>
int main(){
    int a[100];
    int key;
    int n;
    int i;
    printf("Enter the size of a:");
    scanf("%d",&n);
    printf("Enter the Array a:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the targeted Element:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            printf("the element found at %d",i+1);
            break ;
        }
    }
    if(n==i){
        printf("The elemnt not found");
    }
    return 0;
}