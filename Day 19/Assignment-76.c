#include<stdio.h>
int main(){
    int a[100][100];
    int b[100][100];
    int r,c;
    int s=0;
    printf("Enter the row r:");
    scanf("%d",&r);
    printf("Enter the column c:");
    scanf("%d",&c);
    printf("Ente the First matric a:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for( int i=0;i<r;i++)
    {
        s=s+a[i][i];
    }
    printf("Addision of diagonal; %d",s);
}