#include<stdio.h>
int main()
{
    float basic,travel,bonus,netsal;
    printf("Basic pay:");
    scanf("%f",&basic);
   
    if(basic<=10000 && basic>=0)
    {
        travel =basic*1/100;
        bonus=basic*2/100;
        netsal=basic+travel+bonus;
    }
    else if(basic<=25000 && basic>=10001)
    {
        travel =basic*2/100;
        bonus=basic*5/100;
        netsal=basic+travel+bonus;
    }
    else if(basic<=50000 && basic>=25001)
    {
        travel =basic*3/100;
        bonus=basic*10/100;
        netsal=basic+travel+bonus;
    }
    else if(basic<=100000 && basic>=50001)
    {
        travel =basic*5/100;
        bonus=basic*15/100;
        netsal=basic+travel+bonus;
    }
    else if(basic>=100000)
    {
        travel =basic*5/100;
        bonus=basic*20/100;
        netsal=basic+travel+bonus;
    }
    printf("Net salary:%.2f",netsal);
    
    
 return 0; 

}
