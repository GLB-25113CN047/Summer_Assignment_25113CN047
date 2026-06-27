#include<stdio.h>
int main()
{
    char s[100];
    int c;
    int l=0;
    printf("1.Enter String\n");
    printf("2.Display String\n");
    printf("3.Find Length\n");
    printf("4.Reverse String\n");
    printf("5.Convert to Uppercase\n");
    printf("6.Exit\n\n");
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
            for(int i=0;s[i]!=0;i++)
            {
                l++;
            }
            printf("Length=%d",l);
            break;
        case 4:
            printf("Enter String:");
            scanf("%s",s);
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
            printf("Uppercase = ");
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
            printf("Thank Yoi");
            break;
        default:
            printf("invalid choice");
    }
    return 0;
}