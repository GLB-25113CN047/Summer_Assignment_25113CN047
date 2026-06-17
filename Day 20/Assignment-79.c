#include<stdio.h>
int main(){
    int a[100][100];
    int r,c;
    printf("Enter the row r:");
    scanf("%d",&r);
    printf("Enter th the column c:");
    scanf("%d",&c);
    printf("Ente the First Matrix a:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        int sum=0;
        for(int j=0;j<c;j++)
        {
            sum=sum+a[i][j];
        }
        printf("sum is%d \n",sum);
    }
    return 0;
}