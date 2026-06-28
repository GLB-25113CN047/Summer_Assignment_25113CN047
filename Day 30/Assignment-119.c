#include<stdio.h>
int main()
{
    int nos;
    int id[100];
    char n[100][100];
    int s[100];
    int search;
    printf("Enter the No of Employee:");
    scanf("%d",&nos);
    for(int i=0;i<nos;i++)
    {
        printf("\nEmployee %d\n",i+1);
        printf("Enter the Employee Id.:");
        scanf("%d",&id[i]);
        printf("Enter the Name(Without Spaces):");
        scanf("%s",n[i]);
        printf("Enter the Salaary of %s:",n[i]);
        scanf("%d",&s[i]);
    }
    printf("\nMini Employee Records\n");
    for(int i=0;i<nos;i++)
    {
        printf("\nEmployee %d\n",i+1);
        printf("ID of Employee %d\n",id[i]);
        printf("Name of Employee is %s\n",n[i]);
        printf("Salary of %s is %drs\n",n[i],s[i]);
    }
    printf("\n\nSearch Any Employeee By ID;");
    scanf("%d",&search);
    for(int i=0;i<nos;i++)
    {
        if(id[i]==search)
        {
            printf("Id of Employee %d\n",id[i]);
            printf("Name of the employee is %s\n",n[i]);
            printf("Salary of %sji is %drs",n[i],s[i]);
        }
        else
        {
            printf("No Employee is regestered from this %d in the System",search);
            break;
        }
    }
    return 0;
}