#include<stdio.h>
int main()
{
    int nos;
    int id[100];
    char n[100][100];
    long long s[100];
    printf("Enter the No of Contacts:");
    scanf("%d",&nos);
    for(int i=0;i<nos;i++)
    {
        printf("\nContact %d\n",i+1);
        printf("Enter the Contact Id.:");
        scanf("%d",&id[i]);
        printf("Enter the Name(Without Spaces):");
        scanf("%s",n[i]);
        printf("Enter the Phone Number:");
        scanf("%lld",&s[i]);
    }
    printf("\nContact Records\n");
    for(int i=0;i<nos;i++)
    {
        printf("\nContact %d\n",i+1);
        printf("ID of contact %d\n",id[i]);
        printf("Name of Contact is %s\n",n[i]);
        printf("Mobile Number %lld\n",s[i]);
    }
    return 0;
}