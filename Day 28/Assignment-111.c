#include<stdio.h>
int main()
{
    int nos;
    int rn[100];
    char n[100][100];
    char aur[100][100];
    char m[100][100];
    int f[100];
    printf("Enter the No of Passengers:");
    scanf("%d",&nos);
    for(int i=0;i<nos;i++)
    {
        printf("\nPassenger %d\n",i+1);
        printf("Enter the Passengerr name.:");
        scanf("%s",n[i]);
        printf("Enter the Tiecket Number:");
        scanf("%d",&rn[i]);
        printf("Enter Your Origin Station:");
        scanf("%s",m[i]);
        printf("Enter Your Destination Station:");
        scanf("%s",aur[i]);
        printf("Enter the Fare Of Ticket:");
        scanf("%d",&f[i]);
    }
    printf("\nTicket Records\n");
    for(int i=0;i<nos;i++)
    {
        printf("\n________Counter Records___________\n");
        printf("\nPassenger %d\n",i+1);
        printf("Passenger Name %s\n",n[i]);
        printf("Ticket Number %d\n",rn[i]);
        printf("Origin Station %s\n",m[i]);
        printf("Destination Station %s\n",aur[i]);
        printf("Fare of Ticket %d\n",f[i]);
    }
    return 0;
}