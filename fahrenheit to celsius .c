#include <stdio.h>

int main()
{
    float c,f;
    printf("Enter the fahrenheit : ");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("Celsius is %.2f",c);
}
