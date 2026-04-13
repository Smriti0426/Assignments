#include<stdio.h>
void main()
{
    int temp,num,digit,sum=0;
    printf("Enter 3 digit umber");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        digit=temp%10;
        sum=sum + (digit*digit*digit);
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("Armstrong number");

    }
    else
    {
        printf("Not a armstrong number");
    }
    
}