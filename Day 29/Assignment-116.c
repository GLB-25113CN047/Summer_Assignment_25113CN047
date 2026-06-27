#include<stdio.h>
int main()
{
    int p[100];
    char pn[100][100];
    int q[100];
    int price[100];
    int nop;
    printf("Enter the No. of Product:");
    scanf("%d",&nop);
    for(int i=0;i<nop;i++)
    {
        printf("\nProduct %d\n",i+1);
        printf("Enter the id of Product:");
        scanf("%d",&p[i]);
        printf("Enter the name of the Product:");
        scanf("%s",pn[i]);
        printf("Enter the Quantity of %s:",pn[i]);
        scanf("%d",&q[i]);
        printf("Enter the Price of %s in rs:",pn[i]);
        scanf("%d",&price[i]);
    }
    for(int i=0;i<nop;i++)
    {
        printf("\nProduct %d\n",i+1);
        printf("Id of product is %d\n",p[i]);
        printf("Name of product is %s\n",pn[i]);
        printf("Qty of %s is %d\n",pn[i],q[i]);
        printf("The Price of %s is %drs\n",pn[i],price[i]);
    }
    return 0;
}