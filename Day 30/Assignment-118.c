#include<stdio.h>
int main()
{
    int nos;
    int rn[100];
    char n[100][100];
    char aur[100][100];
    int m[100];
    printf("Enter the No of Books:");
    scanf("%d",&nos);
    for(int i=0;i<nos;i++)
    {
        printf("\nBOOK_%d\n",i+1);
        printf("Enter the Book ID.:");
        scanf("%d",&rn[i]);
        printf("Enter the Book Name(Without Spaces):");
        scanf("%s",n[i]);
        printf("Enter the Aurther Name(Without Spaces):");
        scanf("%s",aur[i]);
        printf("Enter the No of Copies:");
        scanf("%d",&m[i]);
    }
    printf("\nMini Library Records\n");
    for(int i=0;i<nos;i++)
    {
        printf("\n________Mini Library Record___________\n");
        printf("\nBook_%d\n",i+1);
        printf("Book ID %d\n",rn[i]);
        printf("Book Name %s\n",n[i]);
        printf("Author Name %s\n",aur[i]);
        printf("No. of Copies %d\n",m[i]);
    }
    return 0;
}