#include<stdio.h>
int main(){
    int m;
    printf("Enter the Number n:");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            printf("%c",i+64);
        }
        printf("\n");
    }
    return 0;
}