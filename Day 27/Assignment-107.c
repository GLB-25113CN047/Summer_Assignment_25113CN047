#include<stdio.h>
int main()
{
    int nos;
    int id[100];
    char n[100][100];
    int s[100];
    int l;
    int h;
    int avg;
    int t=0;
    printf("Enter the No of Employee:");
    scanf("%d",&nos);
    for(int i=0;i<nos;i++)
    {
        printf("\nEmployee %d\n",i+1);
        printf("Enter the Employee Id.:");
        scanf("%d",&id[i]);
        printf("Enter the Name(Without Spaces):");
        scanf("%s",n[i]);
        printf("Enter the Salaary:");
        scanf("%d",&s[i]);
    }
    printf("\nEmployee Records\n");
    for(int i=0;i<nos;i++)
    {
        printf("\nEmployee %d\n",i+1);
        printf("ID of Employee %d\n",id[i]);
        printf("Name of Employee is %s\n",n[i]);
        printf("Salary %d\n",s[i]);
    }
    l=s[0];
    h=s[0];
    for(int i=0;i<nos;i++)
    {
        t=t+s[i];
    }
    for(int i=0;i<nos;i++)
    {
        if(s[i]>h)
        {
            h=s[i];
        }
        else if(s[i]<l)
        {
            l=s[i];
        }
    }
    printf("\nHighest Salary %d",h);
    printf("\nLowest Salary %d",l);
    printf("\nTotal Salary %d",t);
    printf("\nAverage salary %d",t/nos);
    return 0;
}