#include<stdio.h>
int main()
{
    int nos;
    char n[100][100];
    int rn[100];
    int c[100];
    int m[100];
    int chem[100];
    int phy[100];
    int e[100];
    int t[100];
    float per[100];
    char g[100];
    printf("Enter the No of Students:");
    scanf("%d",&nos);
    for(int i=0;i<nos;i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("Enter Your Name:");
        scanf("%s",n[i]);
        printf("Enter the Roll no.:");
        scanf("%d",&rn[i]);
        printf("\n");
        printf("Enter the Computer Science Marks:");
        scanf("%d",&c[i]);
        printf("Enter the Maths Marks;");
        scanf("%d",&m[i]);
        printf("Enter the Chemistry Marks;");
        scanf("%d",&chem[i]);
        printf("Enter the Physics Marks;");
        scanf("%d",&phy[i]);
        printf("Enter the English Mrks;");
        scanf("%d",&e[i]);
        printf("\n");
    }
    for(int i=0;i<nos;i++)
    {
        printf("______________________________________");
        printf("\n Student %d\n",i+1);
        t[i]=c[i]+m[i]+chem[i]+phy[i]+e[i];
        printf("\nTotal Marks %d",t[i]);
        per[i]=(t[i]*100.0)/500;
        printf("\nPercentage of %s is %fPercent\n",n[i],per[i]);
        if(per[i]>80)
        {
            printf("Grade of %s is A",n[i]);
            printf("\n");
        }
        else if(per[i]>70)
        {
            printf("Grade of %s is B",n[i]);
            printf("\n");
        }
        else if(per[i]>60)
        {
            printf("Grade of %s is C",n[i]);
            printf("\n");
        }
        else
        {
            printf("Grade of %s is D",n[i]);
            printf("\n");
        }
        if(per[i]>33)
        {
            printf("Result:PASS");
        }
        else
        {
            printf("Result:FAIL");
        }
        printf("\n");
    }
}