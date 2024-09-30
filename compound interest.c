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
  int count=0,a=1;
   c=(1+r/100);
  do
  {
    a=c*a;
    count++;
  }while(count<=t);
   amt=p*a;
   ci=amt-p;
   printf("compound interest is %.3f ",ci);
   return 0;
   
}
