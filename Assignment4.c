#include<stdio.h>
void main()
{
    float basic, gross, HRA, TA, PT, net;
    printf("Enter basic salary : ");
    scanf("%f",&basic);

    HRA = 0.10*basic;
    TA = 0.05*basic;
    gross=HRA+TA+basic;
    PT=0.02*gross;
    net=gross-PT;

    printf("HRA is %f\n",HRA);
    printf("TA is %f\n",TA);
    printf("Gross salary is %f\n",gross);
    printf("Payable Tax is %f\n",PT);
    printf("Net salary payable after deductions is %f\n",net);
}