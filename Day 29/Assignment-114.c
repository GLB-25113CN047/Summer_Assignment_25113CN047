#include<stdio.h>
int main()
{
    int a[100];
    int n;
    int c;
    int sum=0;
    int max;
    printf("1.Enter Array\n");
    printf("2.Display Array\n");
    printf("3.Find Sum\n");
    printf("4.Find Largest\n");
    printf("5.Exit\n\n");
    printf("Enter Choice:");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            printf("Enter Size:");
            scanf("%d",&n);
            printf("Enter Array:");
            for(int i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            break;
        case 2:
            printf("Enter Size:");
            scanf("%d",&n);
            printf("Enter Array:");
            for(int i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            printf("Array:");
            for(int i=0;i<n;i++)
            {
                printf("%d ",a[i]);
            }
            break;
        case 3:
            printf("Enter Size:");
            scanf("%d",&n);
            printf("Enter Array:");
            for(int i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
                sum=sum+a[i];
            }
            printf("Sum=%d",sum);
            break;
        case 4:
            printf("Enter Size:");
            scanf("%d",&n);
            printf("Enter Array:");
            for(int i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            max=a[0];
            for(int i=1;i<n;i++)
            {
                if(a[i]>max)
                    max=a[i];
            }
            printf("Largest=%d",max);
            break;
        case 5:
            printf("Thank You");
            break;
        default:
            printf("Invalid Choice");
    }
    return 0;
}