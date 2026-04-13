#include<stdio.h>
#include<math.h>

long fact(int n)
{
    int i,f=1;
 for(i=1;i<=n;i++)
 {
    f=i*f;
 }
 return f;
}

int main()
{
    int i,n,x;
    float sum=0;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter number of series: ");
    scanf("%d",&n);

     
    
    for(i=1;i<=n;i++)
    {
        int power=2*i-1,sign;
        sum=sum+sign*pow(x,power)/fact(power);
        sign= -sign;
    }
        printf("Add of sum series = %f",sum);
        return 0;
    
}