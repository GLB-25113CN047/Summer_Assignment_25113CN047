#include<stdio.h>
int main()
{
    char s[100];
    int c;
    int l=0;
    int a[100];
    int n;
    int sum=0;
    int max;
    printf("1.Enter String\n");
    printf("2.Display String\n");
    printf("3.Find Length\n");
    printf("4.Reverse String\n");
    printf("5.Convert to Uppercase\n");
    printf("6.Enter Array\n");
    printf("7.Display Array\n");
    printf("8.Find Sum\n");
    printf("9.Find Largest\n");
    printf("10.Exit\n\n");
    printf("Enter Choice:");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            printf("Enter String:");
            scanf("%s",s);
            break;
        case 2:
            printf("Enter String:");
            scanf("%s",s);
            printf("String = %s",s);
            break;
        case 3:
        printf("Enter String:");
        scanf("%s",s);
        l=0;
        for(int i=0;s[i]!=0;i++)
        {
            l++;
        }
        printf("Length=%d",l);
        break;
        case 4:
            printf("Enter String:");
            scanf("%s",s);
            l=0;
            for(int i=0;s[i]!=0;i++)
            {
                l++;
            }
            printf("Reverse=");
            for(int i=l-1;i>=0;i--)
            {
                printf("%c",s[i]);
            }
            break;
        case 5:
            printf("Enter String:");
            scanf("%s",s);
            printf("Uppercase=");
            for(int i=0;s[i]!=0;i++)
            {
                if(s[i]>='a'&&s[i]<='z')
                {
                    printf("%c",s[i]-32);
                }
                else
                {
                    printf("%c",s[i]);
                }
            }
            break;
        case 6:
        printf("Enter Size:");
        scanf("%d",&n);
        printf("Enter Array:");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        break;
        case 7:
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
        case 8:
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
        case 9:
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
        case 10:
        printf("Thank You");
        break;
        default:
        printf("invalid choice");
    }
    return 0;
}