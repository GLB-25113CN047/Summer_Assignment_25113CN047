#include<stdio.h>
int main(){
    int lcm;
    int a,b;
    printf("Enter the a :");
    scanf("%d",&a);
    printf("Enter the b :");
    scanf("%d",&b);
    for(int i=1;i<=a*b;i++){
        if(i%a==0&&i%b==0){
            lcm=i;
            break;
        }   
    }
    printf("The least common multiple is %d",lcm);
    return 0;
}