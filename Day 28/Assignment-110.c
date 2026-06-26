#include<stdio.h>
int main()
{
    int nos;
    int rn[100];
    char n[100][100];
    char aur[100][100];
    int m[100];
    printf("Enter the No of Accounts:");
    scanf("%d",&nos);
    for(int i=0;i<nos;i++)
    {
        printf("\nBank Account %d\n",i+1);
        printf("Enter the Account Number.:");
        scanf("%d",&rn[i]);
        printf("Enter the Account holder Name(Without Spaces):");
        scanf("%s",n[i]);
        printf("Enter the Balance:");
        scanf("%d",&m[i]);
    }
    printf("\nBank Records\n");
    for(int i=0;i<nos;i++)
    {
        printf("\n________Bank Account___________\n");
        printf("\nBank Acccount %d\n",i+1);
        printf("Account Number %d\n",rn[i]);
        printf("Account Holder Name %s\n",n[i]);
        printf("Baalance %d\n",m[i]);
    }
    return 0;
}