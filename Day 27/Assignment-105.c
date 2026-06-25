#include<stdio.h>
int main()
{
    int nos;
    int rn[100];
    char n[100][100];
    int m[100];
    printf("Enter the No of Students:");
    scanf("%d",&nos);
    for(int i=0;i<nos;i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("Enter the Roll no.:");
        scanf("%d",&rn[i]);
        printf("Enter the Name:");
        scanf("%s",n[i]);
        printf("Enter the total marks of student:");
        scanf("%d",&m[i]);
    }
    printf("\nStudent Records\n");
    for(int i=0;i<nos;i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("Roll No of Student is %d\n",rn[i]);
        printf("Name of student is %s\n",n[i]);
        printf("Total marks %d\n",m[i]);
    }
    return 0;
}