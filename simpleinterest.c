#include <stdio.h>

int main()
{
   float p,t,r,si;
   printf("Enter principal amount :");
   scanf("%f",&p);
  printf("Enter time :");
   scanf("%f",&t);
  printf("Enter rate :");
   scanf("%f",&r);
  si=p*t*r/100;
  printf("simple interest : %.3f",si);
}
