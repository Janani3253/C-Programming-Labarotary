
#include <stdio.h>
int main ()
{
    float tam,eng,mat,sci,soc,total,avg;
    
    scanf("%f%f%f%f%f",&tam,&eng,&mat,&sci,&soc);
    total=tam+eng+mat+sci+soc;
    avg=total/5;
    printf("Total marks:%.2f\n",total);
    printf("Average:%.2f\n",avg);
    if(avg>=91 && avg<=100)
    {
        printf("Grade:'O'");
    }
    else if(avg>=81 && avg<=90)
    {
        printf("Grade:'A+'");
    }
    else if(avg>=71 && avg<=80)
    {
        printf("Grade:A");
    }
    else if(avg>=61 && avg<=70)
    {
        printf("Grade:'B+'");
    }
    else if(avg>=50 && avg<=60)
    {
        printf("Grade:'B'");
    }
    else if(avg<=50 && avg>=0)
    {
        printf("Fail");
    }
    
    
    
    return 0;

}
