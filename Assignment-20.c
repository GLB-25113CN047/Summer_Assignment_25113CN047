#include<stdio.h>
int main(){
    int n;
    int l=0;
    printf("Enter the Number n:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        int p=1;
        for(int j=2;j<i;j++){
            if(i%j==0) p=0;
        }
        if(p==1) l=i;
    }
    printf("%d",l);
    return 0;
}
