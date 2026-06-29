#include<stdio.h>
void enterString()
{
    char s[100];
    printf("Enter String:");
    scanf("%s",s);
}
void displayString()
{
    char s[100];
    printf("Enter String:");
    scanf("%s",s);
    printf("String=%s",s);
}
void findLength()
{
    char s[100];
    int l=0;
    printf("Enter String:");
    scanf("%s",s);
    for(int i=0;s[i]!=0;i++)
    {
        l++;
    }
    printf("Length = %d",l);
}
void reverseString()
{
    char s[100];
    int l=0;
    printf("Enter String:");
    scanf("%s",s);
    for(int i=0;s[i]!=0;i++)
    {
        l++;
    }
    printf("Reverse = ");
    for(int i=l-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
}
void upperCase()
{
    char s[100];
    printf("Enter String:");
    scanf("%s",s);
    printf("Uppercase=");
    for(int i=0;s[i]!=0;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            printf("%c",s[i]-32);
        }
        else
        {
            printf("%c",s[i]);
        }
    }
}
void enterArray()
{
    int a[100],n;
    printf("Enter Size:");
    scanf("%d",&n);
    printf("Enter Array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void displayArray()
{
    int a[100],n;
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
}
void findSum()
{
    int a[100],n,sum=0;
    printf("Enter Size:");
    scanf("%d",&n);
    printf("Enter Array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum=%d",sum);
}
void findLargest()
{
    int a[100],n,max;
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
        {
            max=a[i];
        }
    }
    printf("Largest=%d",max);
}
int main()
{
    int c;
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
            enterString();
            break;
        case 2:
            displayString();
            break;
        case 3:
            findLength();
            break;
        case 4:
            reverseString();
            break;
        case 5:
            upperCase();
            break;
        case 6:
            enterArray();
            break;
        case 7:
            displayArray();
            break;
        case 8:
            findSum();
            break;
        case 9:
            findLargest();
            break;
        case 10:
            printf("Thank You");
            break;
        default:
            printf("Invalid Choice");
    }
    return 0;
}