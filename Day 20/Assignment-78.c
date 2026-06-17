#include<stdio.h>
int main(){
    int a[100][100];
    int b[100][100];
    int c[100][100];
    int r,col;
    int f=1;
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
            if(a[i][j]!=b[i][j])
            {
                f=0;
                break;
            }
        }
    }
    if(f==1)
    {
        printf("The matrix is symmetric");
    }
    else
    {
        printf("The matix is not symmteric");
    }
}    