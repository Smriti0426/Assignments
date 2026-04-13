#include<stdio.h>
#include<math.h>
void main()
{
    int n,c=0,a,mul,result=0;
    printf("Enter a binary number");
    scanf("%d",&n);
    
    while(n>0)
    {
        a=n%10;
        mul=a*pow(2,c);
        result=result+mul;
        c++;
        n=n/10;
    }
    
    printf("%d",result);
}