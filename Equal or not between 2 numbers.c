
#include <stdio.h>
int main ()
{
    int num1, num2 ;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    
    if(num1==num2)
    {
        printf("both numbers are equal");
    }
    else
    {
        printf("both numbers are not equal");
    }
    return 0;

}
