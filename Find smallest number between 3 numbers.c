
#include <stdio.h>
int main ()
{
    int num1, num2,num3 ;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Enter the third number:");
    scanf("%d",&num3);
    if(num1<num2 && num1<num3)
    {
        printf("number 1 is smaller");
    }
    else if(num2<num3 && num2<num1)
    {
        printf("number2 is smaller ");
    }
    else if(num3<num1 && num3<num2)
    {
        printf("number3 is smaller ");
    }
    else if(num1<num3 && num2<num3 && num1==num2)
    {
        printf("number1 and number2 is smaller");
    }
    else if(num2<num1 && num3<num1 && num2==num3)
    {
        printf("number2 and number3 is smaller");
    }
    else if(num1<num2 && num3<num2 && num1==num3)
    {
        printf("number1 and number3 is smaller");
    }
    else
    {
        printf("three numbers are equal");
    }
    return 0;

}
