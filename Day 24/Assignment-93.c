#include<stdio.h>
int main()
{
    char s1[100];
    char s2[100];
    char temp;
    int l=0;
    int f=0;
    scanf("%s",s1);
    scanf("%s",s2);
    for(int i=0;s1[i]!=0;i++)
    {
        l++;
    }
    for(int k=0;k<l;k++)
    {
        temp=s1[0];
        for(int i=0;i<l-1;i++)
        {
            s1[i]=s1[i+1];
        }
        s1[l-1]=temp;
        int c=1;
        for(int i=0;i<l;i++)
        {
            if(s1[i]!=s2[i])
            {
                c=0;
                break;
            }
        }
        if(c==1)
        {
            f=1;
            break;
        }
    }
    if(f==1)
        printf("Rotation");
    else
        printf("Not Rotation");
    return 0;
}