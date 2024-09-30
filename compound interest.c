#include <stdio.h>

int main()
{
   float p,t,r,amt,ci,c;
   printf("Enter principal amount :");
   scanf("%f",&p);
  printf("Enter time :");
   scanf("%f",&t);
  printf("Enter rate :");
   scanf("%f",&r);
 
   c=(1+r/100);
   int i,a=1;
   for(i=1;i<=t;i++)
   {
       a*=c;
   }
   amt=p*a;
   ci=amt-p;
   printf("compound interest is %.3f ",ci);
   return 0;
   
}
