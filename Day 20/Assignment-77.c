#include<stdio.h>
int main(){
    int a[100][100];
    int b[100][100];
    int c[100][100];
    int r,col;
    printf("ENter the row r:");
    scanf("%d",&r);
    printf("Enter the column c:");
    scanf("%d",&col);
    printf("Enter the First matrix a:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the Second matrix b:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<col;j++)
        {
            c[i][j]=0;
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<col;j++)
        {
            for(int k=0;k<col;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("The multipliction of two matrice:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}