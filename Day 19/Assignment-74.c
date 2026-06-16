#include<stdio.h>
int main(){
    int a[100][100];
    int b[100][100];
    int r,c;
    printf("Enter the row r:");
    scanf("%d",&r);
    printf("Enter the column c:");
    scanf("%d",&c);
    printf("Enter the FIrst Matrix a:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the Second Matric b:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The substract of two mtrics;\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]-b[i][j]);
        }
        printf("\n");
    }
}